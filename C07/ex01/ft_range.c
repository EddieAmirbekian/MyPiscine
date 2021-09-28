/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:30:52 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/22 17:30:54 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*range;

	i = 0;
	range = 0;
	if (min < max)
	{
		size = max - min;
		range = (int *)malloc(size * sizeof(int));
		if (range == NULL)
			return (0);
		while (i < size)
		{
			range[i] = min + i;
			i++;
		}
	}
	return (range);
}
