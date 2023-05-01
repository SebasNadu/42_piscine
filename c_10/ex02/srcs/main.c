/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 23:59:12 by johnavar          #+#    #+#             */
/*   Updated: 2023/05/01 11:37:24 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_putstr(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
}

void	ft_putchar(int fd, char c)
{
	write(fd, &c, 1);
}

bool	ft_is_in_string(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (true);
		str++;
	}
	return (false);
}

bool	ft_is_whitespace(char c)
{
	return (ft_is_in_string(c, "\t\n\v\f\r"));
}

bool	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

bool	ft_is_operator(char c)
{
	return (ft_is_in_string(c, "+-"));
}

int	ft_abs_strict_atoi(char *str)
{
	int	result;

	result = 0;
	while (ft_is_whitespace(*str) || ft_is_operator(*str))
		str++;
	while (ft_is_number(*str))
	{
		result = result * 10 + *str - '0';
		str++;
	}
	if (*str != '\0')
		return (-1);
	return (result);
}

void	display_usage(char *exec)
{
	ft_putstr(ERR, "usage:");
	ft_putstr(ERR, basename(exec));
	ft_putstr(ERR, " [-c #] [file ...]\n");
}

void	display_error(char *exec, char *error, char *cause, bool limit)
{
	ft_putstr(ERR, basename(exec));
	ft_putstr(ERR, ": ");
	ft_putstr(ERR, error);
	ft_putstr(ERR, " -- ");
	if (limit)
		ft_putchar(ERR, *cause);
	else
		ft_putstr(ERR, cause);
}

bool	proc_option(char **args, int count, int *index, ssize_t *byte_to_read)
{
	int	atoi;

	if (*index + 1 < count)
	{
		if (*byte_to_read == NOTHING)
		{
			*index += 1;
			atoi = ft_abs_strict_atoi(args[*index]);
			if (atoi != -1)
			{
				*byte_to_read = atoi;
				return (true);
			}
			display_error(args[0], ERR_ILLEGAL_OFF, args[*index], false);
			return (false);
		}
		display_usage(args[0]);
		return (false);
	}
	display_error(args[0], ERR_OPT_REQ_ARG, (char *)(args[*index] + 1), true);
	display_usage(args[0]);
	return (false);
}

char *read_full(ssize_t fd, ssize_t *total_read)
{
	ssize_t byte_read;
	char	buffer[DEFAULT_BUFFER_SIZE];
	CHAR	*old;
	char	*dest;

	*total_read = 0
	dest = malloc(0);
	while ((byte_read = read(fd, buffer, DEFAULT_BUFFER_SIZE)) != 0)
	{
		if (errno != 0)
			return (dest);
		old = dest;
		if (!(dest = malloc((*total_read + byte_read) * sizeof(char))))
			return (0);
		ft_str_sized_copy(dest, old, *total_read);
		ft_str_sized_copy(dest + *total_read, buffer, byte_read);
		*total_read += byte_read;
		free(old);
	}
	return (dest);
}

void	tail_by_lines(ssize_t fd)
{
	ssize_t				byte_read;
	unsigned long		index;
	int					line_count;
	char				*content;
	unsigned int		last_index;

	content = read_full(fd, &byte_read);
	line_count = count_line(byte_read, content);
	index = -1;
	while (++index < byte_read)
	{
		if (content[index] == '\n')
		{
			if (--line_count < DEFAULT_LINE_COUNT)
			{
				while (index < byte_read - 1)
				{
					write(1, content + index + 1, 1);
					index++;
				}
				break ;
			}
			last_index = index + 1;
		}
	}
}

bool	do_tail(int fd, ssize_t *byte_to_read)
{
	if (*byte_to_read == NOTHING)
		tail_by_lines(fd);
	else
		tail_by_byte_count(fd, byte_to_read);
	return (true);
}

bool	process_tail(char **args, int count, int index, ssize_t *byte_to_read)
{
	bool	result;
	int		total;

	result = true;
	total = count - index;
	if (total == 0)
		do_tail(IN, byte_to_read);
	else
	{
		while (index < count)
		{
			if (!tail(EXEC, args[index], opts, total))
				result = false;
			index++;
		}
	}
	return (result);
}

bool	parse_args(char **args, int count)
{
	ssize_t	byte_to_read;
	int		index;

	byte_to_read = NOTHING;
	index = 1;
	while (index < count)
	{
		if (args[index][0] == '-' && args[index][1] && args[index][1] == 'c')
		{
			if (!proc_option(args, count, &index, &byte_to_read))
				return (false);
		}
		else
		{
			display_error(args[0], ERR_ILLEGAL_OPT, (args[index] + 1), true);
			display_usage(args[0]);
			return (false);
		}
		index++;
	}
	return (process_tail(args, count, index, &byte_to_read));
}

int	main(int argc, char **argv)
{
	if (!parse_args(argv, argc))
		return (1);
	return (0);
}
