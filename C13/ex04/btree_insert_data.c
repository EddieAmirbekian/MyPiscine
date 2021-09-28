/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:47:53 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/28 16:47:55 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*tree;

	tree = (t_btree *)malloc(sizeof(t_btree));
	if (tree)
	{
		tree->left = (void *)0;
		tree->right = (void *)0;
		tree->data = item;
	}
	return (tree);
}

void	btree_insert_data(t_btree **root, void *item, \
							int (*cmpf)(void *, void *))
{
	if (*root == ((void *)0))
		*root = btree_create_node(item);
	else if ((*cmpf)(item, (*root)->data) < 0)
		btree_insert_data(&(*root)->left, item, cmpf);
	else
		btree_insert_data(&(*root)->right, item, cmpf);
}
