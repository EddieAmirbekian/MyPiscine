/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:46:15 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/14 15:46:16 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lowercase(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_lowercase(str[i]))
			str[i] -= ('a' - 'A');
		i++;
	}
	return (str);
}
