/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:08:13 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/10 10:24:18 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	p_number(char c_0, char c_1, char c_2)
{
	ft_putchar(c_0);
	ft_putchar(c_1);
	ft_putchar(c_2);
	if (c_2 != 57 || c_1 != 56 || c_0 != 55)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	d_0;
	char	d_1;
	char	d_2;

	d_0 = 48;
	while (d_0 < 56)
	{
		d_1 = d_0 + 1;
		while (d_1 < 57)
		{
			d_2 = d_1 + 1;
			while (d_2 < 58)
			{
				p_number(d_0, d_1, d_2);
				d_2++;
			}
			d_1++;
		}
		d_0++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
