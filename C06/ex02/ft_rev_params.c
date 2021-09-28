/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:58:29 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/19 14:58:33 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	char	*p;

	p = str;
	while (*p != '\0')
	{
		ft_putchar(*p);
		p++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i++ < argc - 1)
		ft_putstr(argv[argc - i]);
	return (0);
}
