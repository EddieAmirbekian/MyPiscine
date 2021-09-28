/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:40:55 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/27 12:17:02 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	is_alphanumeric(char c)
{
	if (c < '0')
		return (0);
	else if (c > '9' && c < 'A')
		return (0);
	else if ((c > 'Z' && c < 'a') || (c > 'z'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	char	*p;

	p = str;
	while (*p)
	{
		if (p == str)
		{
			if (*p <= 'z' && *p >= 'a')
				*p -= 32;
		}
		else if (is_alphanumeric(*(p - 1)) == 0)
		{
			if (*p <= 'z' && *p >= 'a')
				*p -= 32;
		}
		else if ((*p >= 'A') && (*p <= 'Z'))
		{
			*p += 32;
		}
		p++;
	}
	return (str);
}
