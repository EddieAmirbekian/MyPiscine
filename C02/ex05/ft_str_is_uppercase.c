/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:45:54 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/14 15:52:50 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_uppercase(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_char_is_uppercase(str[i]))
			return (0);
		i++;
	}
	return (1);
}
