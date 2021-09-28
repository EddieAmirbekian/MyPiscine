/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 20:29:59 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/16 20:36:57 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

int	is_valid(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	long	num;

	size = 0;
	num = nbr;
	if (!is_valid(base))
		return ;
	while (base[size] != '\0')
		size++;
	if (num < 0)
	{
		num = num * (-1);
		ft_putchar('-');
	}
	if (num >= size)
	{
		ft_putnbr_base(num / size, base);
		ft_putnbr_base(num % size, base);
	}
	else
		ft_putchar(base[num]);
}
