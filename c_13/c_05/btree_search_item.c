/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 20:57:23 by sebasnadu         #+#    #+#             */
/*   Updated: 2023/06/23 21:03:41 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	void	*result;

	result = 0;
	if (root)
	{
		result = btree_search_item(root->left, data_ref, cmpf);
		if (!result && cmpf(root->item, data_ref) == 0)
			return (root->item);
		if (!result)
			result = btree_search_item(root->right, data_ref, cmpf);
	}
	return (result);
}
