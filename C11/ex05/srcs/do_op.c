/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:59:52 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/27 16:59:57 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	make_operation(int a, int b, int (*operation)(int, int))
{
	ft_putnbr(operation(a, b));
	ft_putchar('\n');
}

void	do_op(char **argv)
{
	if (*argv[2] == '+')
		make_operation(ft_atoi(argv[1]), ft_atoi(argv[3]), add);
	else if (*argv[2] == '-')
		make_operation(ft_atoi(argv[1]), ft_atoi(argv[3]), sub);
	else if (*argv[2] == '*')
		make_operation(ft_atoi(argv[1]), ft_atoi(argv[3]), mult);
	else if (*argv[2] == '/')
	{
		if (ft_atoi(argv[3]) == 0)
		{
			ft_putstr("Stop : division by zero\n");
			return ;
		}
		make_operation(ft_atoi(argv[1]), ft_atoi(argv[3]), div);
	}
	else if (*argv[2] == '%')
	{
		if (ft_atoi(argv[3]) == 0)
		{
			ft_putstr("Stop : modulo by zero\n");
			return ;
		}
		make_operation(ft_atoi(argv[1]), ft_atoi(argv[3]), mod);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	else if (ft_strlen(argv[2]) == 1 && (*argv[2] == '+' || *argv[2] == '-'
			|| *argv[2] == '*' || *argv[2] == '/' || *argv[2] == '%'))
	{
		do_op(argv);
	}
	else
		ft_putstr("0\n");
	return (0);
}
