/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:45:09 by johnavar          #+#    #+#             */
/*   Updated: 2023/05/11 22:57:47 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	return (elem);
}
/*
int	main(void)
{
	int		data;
	t_list	*list;

	data = 10;
	list = ft_create_elem((void *)&data);
	printf("list->next: %p\n", list->next);
	printf("list->data: %d\n", *((int *)(list->data)));
} */
