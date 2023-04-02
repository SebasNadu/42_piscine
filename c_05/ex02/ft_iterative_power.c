/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:08:03 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/23 16:15:20 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (0 < power--)
		n *= nb;
	return (n);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i", ft_iterative_power(3, 0));
	return (0);
}*/
