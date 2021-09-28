/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 20:15:41 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/18 20:15:42 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	babylonian(int nb, double approx, double prev_approx)
{
	if (approx * approx <= 2147483647 && (int)approx * (int)approx == nb)
		return ((int)approx);
	if ((int)approx == (int)prev_approx)
		return (0);
	else
		return (babylonian(nb, (approx + nb / approx) / 2, approx));
}

int	ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	return (babylonian(nb, 50, 0));
}
