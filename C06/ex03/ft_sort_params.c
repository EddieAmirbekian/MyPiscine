/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:58:52 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/19 14:58:56 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_print_array(char **arr, int offset, int size)
{
	int	i;

	i = offset - 1;
	while (i++ < size)
		ft_putstr(arr[i]);
}

int	main(int argc, char **argv)
{
	int		i;
	bool	swapped;

	if (argc > 2)
	{
		while (true)
		{
			i = 1;
			swapped = false;
			while (i < argc - 1)
			{
				if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				{
					ft_swap(&argv[i], &argv[i + 1]);
					swapped = true;
				}
				i++;
			}
			if (!swapped)
				break ;
		}
	}
	ft_print_array(argv, 1, argc - 1);
	return (0);
}
