/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:56:30 by johnavar          #+#    #+#             */
/*   Updated: 2023/05/12 16:10:29 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	if (!data)
		return ;
	if (!begin_list)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	*begin_list = ft_list_last(*begin_list);
	(*begin_list)->next = ft_create_elem(data);
}
