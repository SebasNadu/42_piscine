/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:55:47 by johnavar          #+#    #+#             */
/*   Updated: 2023/03/02 17:43:08 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	diff;
	int	i;

	diff = max - min;
	result = (int *)malloc(sizeof(int) * diff);
	if (!result)
		return (0);
	i = 0;
	while (i < diff)
		result[i++] = min++;
	return (result);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	dif;
	int	*result;
	int	i;

	i = 0;
	min = 4;
	max = 7;
	dif = max - min;
	result = ft_range(min, max);
	while (i < dif)
		printf("%i\n", result[i++]);
	return (0);
}*/
