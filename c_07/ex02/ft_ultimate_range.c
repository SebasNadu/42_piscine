/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:44:53 by johnavar          #+#    #+#             */
/*   Updated: 2023/03/02 18:05:40 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int n;

	n = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (!*range)
		return (-1);
	while (min < max)
		(*range)[n++] = min++;
	return (n);
}
/*
int	main(void)
{
	int	*p;
	int	i;
	int	j;

	i = ft_ultimate_range(&p, 0, 10);
	printf("%d\n", i);
	j = 0;
	while (i > 0)
	{
		printf("%d ", *p + j);
		j++;
		i--;
	}
	free(p);
} */
