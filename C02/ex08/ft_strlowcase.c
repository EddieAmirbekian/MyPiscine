/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:46:22 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/14 15:54:35 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_uppercase(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_uppercase(str[i]))
			str[i] += ('a' - 'A');
		i++;
	}
	return (str);
}
