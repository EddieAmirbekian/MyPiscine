/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:11:55 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/08 21:12:03 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_num(int n)
{
	ft_putchar('0' + n / 10);
	ft_putchar('0' + n % 10);
}

void	ft_print_pair(int a, int b)
{
	if (a < b)
	{
		ft_print_num(a);
		ft_putchar(' ');
		ft_print_num(b);
		if (a != 98 || b != 99)
			write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a < 99)
	{
		b = a;
		while (b < 100)
		{
			ft_print_pair(a, b++);
		}
		a++;
	}
}
