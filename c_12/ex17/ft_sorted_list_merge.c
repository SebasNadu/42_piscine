/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:56:18 by sebasnadu         #+#    #+#             */
/*   Updated: 2023/06/21 12:19:02 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert_elem(t_list **begin_list, t_list *elem, int (*cmp)())
{
	if (!*begin_list || cmp(elem->data, (*begin_list)->data) <= 0)
	{
		elem->next = *begin_list;
		*begin_list = elem;
	}
	else
		ft_sorted_list_insert_elem(&(*begin_list)->next, elem, cmp);
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
	if (!begin_list2)
		return ;
	ft_sorted_list_merge(begin_list1, begin_list2->next, cmp);
	ft_sorted_list_insert_elem(begin_list1, begin_list2, cmp);
}
