/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:34:38 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/13 12:27:35 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	is_ended;
	int	temp;

	is_ended = 'f';
	while (is_ended == 'f' && size > 1)
	{
		i = 0;
		is_ended = 't';
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				is_ended = 'f';
			}
			i++;
		}
		size--;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[10];
	int	tab2[] = {3, 2, 4, 5, 6, 7, 9, 8, 1, 10};
    int	size;
    int	i;

	size = 10;
  i = size - 1;
  while (i >= 0)
  {
      tab[i] = i + 1;
      i--;
  }
	ft_sort_int_tab(tab, size);
	ft_sort_int_tab(tab2, size);
	i = 0;
	while (i < size)
	{
		printf("%i ", tab2[i]);
		i++;
	}
  printf("\n");
  return(0);
}*/
