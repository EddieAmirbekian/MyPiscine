/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:12:25 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/12 18:13:14 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	unsigned int	uinumber;

	if (n < 0)
	{
		uinumber = (unsigned int)(-1 * n);
		ft_putchar('-');
	}
	else
		uinumber = (unsigned int)n;
	if (uinumber >= 10)
	{
		ft_putnbr(uinumber / 10);
		ft_putnbr(uinumber % 10);
	}
	else
		ft_putchar(uinumber + '0');
}
