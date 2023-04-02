/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:04:00 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/22 18:19:38 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	i = nb;
	while (--i > 0)
		nb *= i;
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i", ft_iterative_factorial(5));
	return (0);
}*/
