/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 20:37:12 by johnavar          #+#    #+#             */
/*   Updated: 2023/05/01 20:54:54 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

void	ft_calc(int a, char op, int b)
{
	int long	calc;

	calc = 0;
	if (op == '+')
		calc = a + b;
	if (op == '-')
		calc = a - b;
	if (op == '*')
		calc = a * b;
	if (op == '/')
	{
		if (b == 0)
			return (ft_putstr("Stop : division by zero\n"));
		calc = a / b;
	}
	if (op == '%')
	{
		if (b == 0)
			return (ft_putstr("Stop : modulo by zero\n"));
		calc = a % b;
	}
	ft_putnbr(calc);
	ft_putchar('\n');
}
