/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:41:42 by johnavar          #+#    #+#             */
/*   Updated: 2023/05/26 15:18:46 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*list;

	list = 0;
	if (size == 0 || !*strs)
		return (0);
	list = ft_create_elem((void *)strs[size - 1]);
	list->next = ft_list_push_strs(size - 1, strs);
	return (list);
}
/*
int	main(int ac, char **av)
{
	int		index;
	t_list	*current;

	index = 0;
	current = ft_list_push_strs(ac, av);
	while (current)
	{
		printf("list[%d] = $%s$\n", index++, (char *)current->data);
		current = current->next;
	}
} */
