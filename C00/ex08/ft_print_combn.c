/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:29:23 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/09 21:51:42 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printrange(int *range, int n)
{
	int	i;
	int	f;

	f = 1;
	i = 0;
	while (++i < n)
	{
		if (range[i - 1] >= range[i])
			f = 0;
	}
	if (!f)
		return ;
	i = -1;
	while (++i < n)
		ft_putchar(range[i] + 48);
	if (range[0] < (10 - n))
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int	i;
	int	range[10];

	if (n < 0 || n > 10)
		return ;
	i = -1;
	while (++i < n)
		range[i] = i;
	while (range[0] <= (10 - n) && n >= 1)
	{
		ft_printrange(range, n);
		if (n == 10)
			break ;
		range[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (range[i] > 9)
			{
				range[i - 1]++;
				range[i] = 0;
			}
		}
	}
}
