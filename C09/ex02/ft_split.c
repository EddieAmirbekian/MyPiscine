/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 11:07:58 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/27 11:08:04 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>

bool	includes(char *haystack, char needle)
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
	while (true)
	{
		while (includes(charset, *str))
			str++;
		if (*str == '\0')
			break ;
		while (!includes(charset, *str) && *str != '\0')
			str++;
		count++;
	}
	return (count);
}

char	*ft_strndup(char *src, unsigned int n)
{
	char			*dup;
	unsigned int	len;
	unsigned int	i;

	len = 0;
	while (src[len] != '\0')
		len++;
	if (len > n)
		len = n;
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		count;
	char	*word;
	char	**arr;

	count = count_words(str, charset);
	arr = (char **)malloc((count + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (*str != '\0')
	{
		while (includes(charset, *str))
			str++;
		if (*str == '\0')
			break ;
		word = str;
		while (!includes(charset, *str) && *str != '\0')
			str++;
		arr[i++] = ft_strndup(word, str - word);
	}
	arr[i] = 0;
	return (arr);
}
