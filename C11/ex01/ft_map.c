/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:58:57 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/27 16:59:00 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*arr;
	int	i;

	i = 0;
	arr = (int *)malloc(length * sizeof(int));
	if (!arr)
		return (NULL);
	while (i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return (arr);
}
