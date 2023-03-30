/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:46:58 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/21 16:17:01 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	n_p;
	int	result;

	i = 0;
	result = 0;
	n_p = 1;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n_p *= -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
		result = result * 10 + str[i++] - '0';
	return (result * n_p);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%i\n", ft_atoi(av[1]));
	}
	return (0);
}*/
