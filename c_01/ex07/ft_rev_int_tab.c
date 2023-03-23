/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:24:15 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/13 14:33:49 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
/*
int	main(void)
{
	int	tab[10];
	int	size;
	int	i;

	i = 0;
	size = 10;
	while (i < size)
	{
		tab[i] = i;
		i++;
	}
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%i", tab[i]);
		i++;
	}
	return (0);
}
*/
