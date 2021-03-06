/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:07:55 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/14 16:11:22 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*s;

	s = dest;
	while (*s != '\0')
		s++;
	while (*src != '\0')
	{
		*s = *(unsigned char *)src;
		s++;
		src++;
	}
	*s = '\0';
	return (dest);
}
