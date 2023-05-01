/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 19:51:18 by johnavar          #+#    #+#             */
/*   Updated: 2023/05/01 19:59:35 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	index;
	int	*results;

	results = malloc(length * sizeof(int));
	if (!results)
		return (NULL);
	index = -1;
	while (++index < length)
		results[index] = (*f)(tab[index]);
	return (results);
}
/*
int	ft_square(int nb)
{
	return (nb * nb);
}

int	main(void)
{
	int	index;
	int	*tab;
	int	length;
	int	*results;

	length = 10;
	tab = malloc(length * sizeof(int));
	index = -1;
	while (++index < length)
		tab[index] = index;
	results = ft_map(tab, length, &ft_square);
	index = -1;
	while (++index < length)
		printf("[mapped] square(%d) = %d\n", index, results[index]);
	return (0);
} */
