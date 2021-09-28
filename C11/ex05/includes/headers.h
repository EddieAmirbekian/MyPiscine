/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:59:39 by eamirbek          #+#    #+#             */
/*   Updated: 2021/09/27 16:59:42 by eamirbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		add(int a, int b);
int		sub(int a, int b);
int		mult(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);

#endif
