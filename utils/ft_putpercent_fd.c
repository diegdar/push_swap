/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpercent_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 20:38:16 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/25 20:38:19 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_putpercent_fd(double value, int fd)
{
	int	integer;
	int	decimal;

	value *= 100.0;
	integer = (int)value;
	decimal = (int)((value - integer) * 100 + 0.5);
	if (decimal == 100)
	{
		integer++;
		decimal = 0;
	}
	ft_putnbr_fd(integer, fd);
	ft_putchar_fd('.', fd);
	if (decimal < 10)
		ft_putchar_fd('0', fd);
	ft_putnbr_fd(decimal, fd);
	ft_putchar_fd('%', fd);
}
