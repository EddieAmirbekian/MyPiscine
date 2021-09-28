/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 20:14:48 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/18 20:14:51 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	i;

	fact = 0;
	if (nb >= 0)
		fact = 1;
	if (nb > 1)
	{
		i = 2;
		while (i <= nb)
		{
			fact *= i;
			i++;
		}
	}
	return (fact);
}
