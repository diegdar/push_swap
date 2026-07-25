/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chunks_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 20:45:09 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/25 20:45:13 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../..push_swap.h"

void	ft_chunks_push(t_stack **a, t_stack **b, t_counter *counter)
{
	t_position	pos;
	int			chunk;
	int			limit;
	int			middle;

	chunk = ft_chunk_size(ft_stack_size(*a));
	limit = chunk - 1;
	while (*a)
	{
		pos = ft_chunk_position(*a, limit);
		if (pos.from_top == -1)
		{
			limit += chunk;
			continue ;
		}
		middle = limit - (chunk / 2);
		if ((*a)->index <= limit)
		{
			ft_pb(a, b, counter);
			if (*b && (*b)->index < middle)
				ft_rb(b, counter);
		}
		else if (pos.from_top <= pos.from_bottom)
			ft_ra(a, counter);
		else
			ft_rra(a, counter);
	}
}
