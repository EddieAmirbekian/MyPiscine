/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:31:12 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/22 17:31:17 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	get_final_len(char **strings, int size, int sep_len)
{
	int	final_len;
	int	i;

	final_len = 0;
	i = 0;
	while (i < size)
	{
		final_len += ft_strlen(strings[i]);
		final_len += sep_len;
		i++;
	}
	final_len -= sep_len;
	return (final_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_len;
	int		i;
	char	*p;
	char	*res;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_len = get_final_len(strs, size, ft_strlen(sep));
	res = (char *)malloc((full_len + 1) * sizeof(char));
	if (res == NULL)
		return (0);
	p = res;
	i = 0;
	while (i < size)
	{
		ft_strcpy(p, strs[i]);
		p += ft_strlen(strs[i]);
		if (i++ < size - 1)
		{
			ft_strcpy(p, sep);
			p += ft_strlen(sep);
		}
	}
	*p = '\0';
	return (res);
}
