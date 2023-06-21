/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:27:15 by sebasnadu         #+#    #+#             */
/*   Updated: 2023/06/21 11:27:10 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*previous;
	t_list	*next;
	t_list	*current;

	if (!begin_list)
		return ;
	previous = 0;
	next = 0;
	current = begin_list;
	while (!current)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	begin_list = previous;
}
