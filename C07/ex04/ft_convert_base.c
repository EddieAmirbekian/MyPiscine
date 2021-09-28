/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:31:42 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/22 17:31:57 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>

int		ft_strlen(char *str);
bool	is_blank(char c);
int		get_numlen(unsigned int num, int radix, bool negative);
bool	is_valid(char *base);

int	resolve_base(char *base, char match)
{
	int		index;

	index = 0;
	while (base[index])
	{
		if (base[index] == match)
			return (index);
		index++;
	}
	return (-1);
}

char	*ft_buffer_base(char *base, int number, bool negative)
{
	int		index;
	int		radix;
	int		length;
	char	*string;

	radix = ft_strlen(base);
	length = get_numlen(number, radix, negative);
	string = (char *)malloc((length + 1) * sizeof(char));
	if (!string)
		return (0);
	index = 0;
	if (negative)
	{
		string[0] = '-';
		index = 1;
	}
	while (index < length)
	{
		string[length - (!negative) - index++] = base[number % radix];
		number /= radix;
	}
	string[length] = '\0';
	return (string);
}

void	init(int *radix, int *sign, char *nbr, char *base_from)
{
	*radix = ft_strlen(base_from);
	*sign = 1;
	while (*nbr == ' ' || *nbr == '\f' || *nbr == '\v'
		|| *nbr == '\r' || *nbr == '\t' || *nbr == '\n')
		nbr++;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*(nbr++) == '-')
			(*sign) *= -1;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		radix;
	int		sign;
	int		resolved;
	bool	negative;
	int		result;

	if (!is_valid(base_from) || !is_valid(base_to))
		return (NULL);
	result = 0;
	init(&radix, &sign, nbr, base_from);
	resolved = resolve_base(base_from, *nbr);
	while (resolved != -1)
	{
		result *= radix;
		result += resolved;
		nbr++;
		resolved = resolve_base(base_from, *nbr);
	}
	negative = true;
	if (result == 0)
		sign = 1;
	if (sign > 0)
		negative = false;
	return (ft_buffer_base(base_to, result, negative));
}
