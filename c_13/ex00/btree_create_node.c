/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:48:56 by sebasnadu         #+#    #+#             */
/*   Updated: 2023/06/23 18:54:28 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*tree;

	tree = (t_btree *)malloc(sizeof(t_btree));
	if (!tree)
		return (NULL);
	tree->right = NULL;
	tree->left = NULL;
	tree->item = item;
	return (tree);
}
