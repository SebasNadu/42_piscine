/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 09:22:30 by sebasnadu         #+#    #+#             */
/*   Updated: 2023/06/21 09:59:08 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_swap_void(void **a, void **b)
{
	void	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*current;
	t_list	*end;
	int		swapped;

	if (!*begin_list)
		return ;
	end = NULL;
	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		current = *begin_list;
		while (current->next != end)
		{
			if ((*cmp)(current->data, current->next->data) > 0)
			{
				ft_swap_void(&(current->data), &(current->next->data));
				swapped = 1;
			}
			current = current->next;
		}
		end = current;
	}
}
