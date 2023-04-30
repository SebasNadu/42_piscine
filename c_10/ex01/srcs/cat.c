/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:47:20 by johnavar          #+#    #+#             */
/*   Updated: 2023/04/30 19:47:35 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.h"

void	show_error(char *executable, char *path)
{
	if (errno == 0)
		return ;
	ft_putstr(ERR, basename(executable));
	ft_putstr(ERR, ": ");
	ft_putstr(ERR, path);
	ft_putstr(ERR, ": ");
	ft_putstr(ERR, strerror(errno));
	ft_putstr(ERR, "\n");
	errno = 0;
}

void	do_cat(char *executable, char *path, int file_descriptor)
{
	ssize_t	byte_read;
	char	buffer[BUFFER_SIZE];

	while ((byte_read = read(file_descriptor, buffer, BUFFER_SIZE)) > 0)
	{
		if (errno != 0)
		{
			show_error(executable, path);
			break ;
		}
		write(OUT, &buffer[0], byte_read);
	}
	if (file_descriptor > 2)
		close(file_descriptor);
}

int	cat(char **paths, int count, int offset)
{
	int		result;
	int		file_descriptor;
	int		i;
	char	*path;

	result = 0;
	i = offset;
	while (i < count + offset)
	{
		path = paths[i];
		file_descriptor = open(path, O_RDONLY);
		if (file_descriptor < 0)
		{
			show_error(paths[0], path);
			result = 1;
		}
		else
			do_cat(paths[0], path, file_descriptor);
		i++;
	}
	return (result);
}
