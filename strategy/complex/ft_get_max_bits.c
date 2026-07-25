/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_max_bits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 14:41:27 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/25 14:41:29 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_get_max_bits(t_stack *stack)
{
	int	max;
	int	bits;

	max = ft_find_max_index(stack);
	bits = 0;
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}
