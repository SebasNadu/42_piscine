/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:36:53 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/10 10:44:33 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	multi_char(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	if (a != '9' || b != '8' || c != '9' || d != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	par_digits(int a, int b)
{
	char	d_1;
	char	d_2;
	char	d_3;
	char	d_4;

	d_1 = (a / 10) + 48;
	d_2 = (a % 10) + 48;
	d_3 = (b / 10) + 48;
	d_4 = (b % 10) + 48;
	multi_char(d_1, d_2, d_3, d_4);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			par_digits(i, j);
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
