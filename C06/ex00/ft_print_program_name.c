/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:58:09 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/19 14:58:12 by eamirbek         ###   ########.fr       */
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
	if (argc > 0)
		ft_putstr(argv[0]);
	return (0);
}
