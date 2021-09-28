/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:00:16 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/27 17:00:18 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	char	*p;

	p = str;
	while (*p != 0)
	{
		write(1, p, 1);
		p++;
	}
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		n = (unsigned int)(-1 * nb);
		ft_putchar('-');
	}
	else
		n = (unsigned int)nb;
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int	ft_atoi(char *str)
{
	unsigned int		res;
	int					sign;
	char				*p;

	res = 0;
	sign = 1;
	p = str;
	while (*p == ' ' || (*p >= 9 && *p <= 13))
		p++;
	while (*p == '-' || *p == '+')
	{
		if (*p == '-')
			sign *= -1;
		p++;
	}
	while (*p >= '0' && *p <= '9')
	{
		res *= 10;
		res += (unsigned int)(*p - '0');
		p++;
	}
	return ((int)(res * sign));
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
