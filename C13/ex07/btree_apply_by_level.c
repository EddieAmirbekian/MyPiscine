/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:48:49 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/28 16:48:51 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	if (root)
		return (1 + MAX(btree_level_count(root->left), \
				btree_level_count(root->right)));
	return (0);
}

void	btree_process_level(t_btree *root, int *arr, int level,
			void (*applyf)(void *item, int current_level, int is_first_elem))
{
	if (!root)
		return ;
	if (level == 1)
	{
		applyf(root->data, arr[0], arr[1]);
		arr[1] = 0;
	}
	else if (level > 1)
	{
		btree_process_level(root->left, arr, level - 1, applyf);
		btree_process_level(root->right, arr, level - 1, applyf);
	}
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
			int current_level, int is_first_elem))
{
	int	arr[2];
	int	h;
	int	i;

	if (root)
	{
		h = btree_level_count(root);
		i = 0;
		while (i < h)
		{
			arr[0] = i;
			arr[1] = 1;
			btree_process_level(root, arr, ++i, applyf);
		}
	}
}
