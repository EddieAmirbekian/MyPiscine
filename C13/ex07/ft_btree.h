/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:48:43 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/28 16:48:44 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H
# define MAX(a,b) ((a > b) ? a : b)

typedef struct s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*data;
}	t_btree;

#endif
