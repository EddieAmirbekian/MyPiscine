/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:48:30 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/28 16:48:31 by eamirbek         ###   ########.fr       */
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
