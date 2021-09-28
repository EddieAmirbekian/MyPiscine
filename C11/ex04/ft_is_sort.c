/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:59:20 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/28 14:50:37 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sorted;

	sorted = 1;
	i = 0;
	while (i < length - 1 && sorted)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			sorted = 0;
		i++;
	}
	if (sorted != 1)
	{
		sorted = 1;
		i = 0;
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	}
	return (1);
}
