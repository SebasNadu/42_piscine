/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:40:22 by sebasnadu         #+#    #+#             */
/*   Updated: 2023/06/06 16:49:58 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == 0)
		return (0);
	if ((*cmp)(begin_list->data, data_ref) == 0)
		return (begin_list);
	else
		return (ft_list_find(begin_list->next, data_ref, cmp));
}
