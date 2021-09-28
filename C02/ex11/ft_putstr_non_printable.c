/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:46:57 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/15 16:24:28 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_printable(char c)
{
	return (c >= ' ' && c != 127);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	current;
	char			*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (1)
	{
		current = str[i];
		if (current == '\0')
			break ;
		if (ft_is_printable(current))
			ft_putchar(current);
		else
		{
			ft_putchar('\\');
			ft_putchar(hex[current / 16]);
			ft_putchar(hex[current % 16]);
		}
		i++;
	}
}
