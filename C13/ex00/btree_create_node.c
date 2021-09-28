/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:46:52 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/28 16:46:54 by eamirbek         ###   ########.fr       */
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
