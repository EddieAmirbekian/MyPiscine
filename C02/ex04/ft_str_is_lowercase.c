/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:45:44 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/14 15:52:02 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lowercase(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_char_is_lowercase(str[i]))
			return (0);
		i++;
	}
	return (1);
}
