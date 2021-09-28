/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 20:30:08 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/16 20:40:11 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid(char *base)
{
	char	*p;
	int		i;

	p = base;
	if (*base == 0 || *(base + 1) == 0)
		return (0);
	while (*p)
	{
		if (*p == '+' || *p == '-'
			|| *p == ' ' || *p <= 31)
			return (0);
		i = 1;
		while (*(p + i))
		{
			if (*(p + i) == *p)
				return (0);
			i++;
		}
		p++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*is_in_base(char *base, char *to_find)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (*to_find == base[i])
			return (base + i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	nb;
	int				sign;
	char			*p;

	nb = 0;
	sign = 1;
	if (is_valid(base))
	{
		p = str;
		while (*p == ' ' || (*p >= 9 && *p <= 13))
			p++;
		while (*p == '-' || *p == '+')
		{
			if (*p == '-')
				sign *= -1;
			p++;
		}
		while (is_in_base(base, p))
		{
			nb *= ft_strlen(base);
			nb += (unsigned int)(is_in_base(base, p) - base);
			p++;
		}
	}
	return ((int)(nb * sign));
}
