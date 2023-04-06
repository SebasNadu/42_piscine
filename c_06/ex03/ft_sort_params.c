/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:54:27 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/23 18:45:34 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_arg(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	while (++i < ac)
	{
		j = 0;
		while (av[i][j])
			write(1, &av[i][j++], 1);
		write(1, "\n", 1);
	}
}

void	ft_sort_params(int ac, char **av)
{
	int		i;
	int		is_ended;
	char	*temp;

	is_ended = 0;
	while (is_ended == 0)
	{
		i = 1;
		is_ended = 1;
		while (i < --ac)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				temp = av[i];
				av[i] = av[i + 1];
				av[i + 1] = temp;
				is_ended = 0;
			}
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc == 2)
	{
		j = 0;
		while (argv[1][j])
			write(1, &argv[1][j++], 1);
		write(1, "\n", 1);
		return (0);
	}
	else if (argc > 2)
		ft_sort_params(argc, argv);
	ft_print_arg(argc, argv);
	return (0);
}
