/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chunk_back.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 14:42:28 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/25 14:42:32 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_chunk_back(t_stack **a, t_stack **b, t_counter *counter)
{
	int	max;

	if (!b || !*b)
		return ;
	max = ft_find_max_index(*b);
	while (*b)
	{
		ft_rotate_to_top(b, max, 'b', counter);
		ft_pa(b, a, counter);
		max--;
	}
}
