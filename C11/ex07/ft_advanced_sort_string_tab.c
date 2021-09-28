/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:00:45 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/27 17:00:46 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		sorted;
	int		j;
	char	*temp;

	sorted = 0;
	while (!sorted)
	{
		j = 0;
		sorted = 1;
		while (tab[++j])
		{
			if (cmp(tab[j - 1], tab[j]) > 0)
			{
				temp = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = temp;
				sorted = 0;
			}
		}
	}
}
