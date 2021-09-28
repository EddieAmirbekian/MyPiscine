/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:48:15 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/28 16:48:17 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *d, int (*cmpf)(void *, void *))
{
	int	cmp;

	if (root == ((void *)0) || cmpf == ((void *)0))
		return ((void *)0);
	cmp = cmpf(root->data, d);
	if (cmp == 0)
		return (root->data);
	if (cmp > 0)
		return (btree_search_item(root->left, d, cmpf));
	return (btree_search_item(root->right, d, cmpf));
}
