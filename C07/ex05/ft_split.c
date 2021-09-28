/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:32:35 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/22 17:32:37 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>

bool	includes(char needle, char *haystack)
{
	while (*haystack != '\0')
	{
		if (*haystack == needle)
			return (true);
		haystack++;
	}
	return (false);
}

int	count_words(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		while (includes(*str, charset))
			str++;
		if (*str == '\0')
			break ;
		while (!includes(*str, charset) && *str != '\0')
			str++;
		count++;
	}
	return (count);
}

char	*ft_strndup(char *str, unsigned int n)
{
	unsigned int	i;
	unsigned int	len;
	char			*dup;

	len = 0;
	while (str[len] != '\0')
		len++;
	if (len > n)
		len = n;
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		count;
	char	*word_start;
	char	**res;

	count = count_words(str, charset);
	res = (char **)malloc((count + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (*str != '\0')
	{
		while (includes(*str, charset))
			str++;
		if (*str == '\0')
			break ;
		word_start = str;
		while (!includes(*str, charset) && *str != '\0')
			str++;
		res[i] = ft_strndup(word_start, str - word_start);
		i++;
	}
	res[i] = 0;
	return (res);
}
