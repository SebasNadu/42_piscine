/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 00:04:19 by sebasnadu         #+#    #+#             */
/*   Updated: 2023/06/04 00:57:52 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
							void *data_ref, int (*cmp)())
{
	if (begin_list == 0)
		return ;
	if ((*cmp)(begin_list->data, data_ref) == 0)
		(*f)(begin_list->data);
	ft_list_foreach_if(begin_list->next, f, data_ref, cmp);
}
