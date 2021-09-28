/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:32:08 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/22 17:32:10 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

bool	is_blank(char c)
{
	return (c == ' ' || c == '\f' || c == '\v'
		|| c == '\r' || c == '\t' || c == '\n');
}

int	get_numlen(unsigned int num, int radix, bool negative)
{
	unsigned int	len;

	len = negative;
	while (true)
	{
		len++;
		if (num / radix == 0)
			break ;
		num /= radix;
	}
	return (len);
}

bool	is_valid(char *base)
{
	char	*p;
	int		i;
	int		j;

	p = base;
	if (base == 0 || ft_strlen(base) <= 1)
		return (false);
	while (*p != '\0')
	{
		if (is_blank(*p) || *p == '+' || *p == '-')
			return (false);
		p++;
	}
	i = 0;
	while (i < p - base)
	{
		j = i + 1;
		while (j < p - base)
			if (base[i] == base[j++])
				return (false);
		i++;
	}
	return (true);
}
