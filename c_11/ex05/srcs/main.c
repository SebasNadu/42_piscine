/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 20:27:12 by johnavar          #+#    #+#             */
/*   Updated: 2023/05/01 20:54:15 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int	main(int argc, char **argv)
{
	int	n;

	n = 0;
	if (argc != 4)
		return (1);
	while (argv[2][n])
		n++;
	if ((argv[2][0] == '+' || argv[2][0] == '-'
		|| argv[2][0] == '/' || argv[2][0] == '*'
		|| argv[2][0] == '%') && n == 1)
	{
		ft_calc(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3]));
	}
	else
	{
		ft_putchar('0');
		ft_putchar('\n');
	}
	return (0);
}
