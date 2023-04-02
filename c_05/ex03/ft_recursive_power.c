/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:32:20 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/22 19:47:10 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		nb = nb * ft_recursive_power(nb, --power);
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i", ft_recursive_power(4, 2));
	return (0);
}*/
