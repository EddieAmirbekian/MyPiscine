/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 18:34:23 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/12 18:38:26 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_sort_int_tab_partition(int *tab, int start, int end)
{
	int	pivot;
	int	i;
	int	j;

	pivot = tab[end];
	i = start - 1;
	j = start;
	while (j < end)
	{
		if (tab[j] < pivot)
		{
			i++;
			ft_swap(&tab[i], &tab[j]);
		}
		j++;
	}
	ft_swap(&tab[i + 1], &tab[end]);
	return (i + 1);
}

void	ft_sort_int_tab_helper(int *tab, int start, int end)
{
	int	partitionIndex;

	if (start < end)
	{
		partitionIndex = ft_sort_int_tab_partition(tab, start, end);
		ft_sort_int_tab_helper(tab, start, partitionIndex - 1);
		ft_sort_int_tab_helper(tab, partitionIndex + 1, end);
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	ft_sort_int_tab_helper(tab, 0, size - 1);
}
