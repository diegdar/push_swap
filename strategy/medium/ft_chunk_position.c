/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chunk_position.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 14:43:05 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/25 14:47:05 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_position	ft_chunk_position(t_stack *stack, int limit)
{
	t_position	pos;
	int			i;
	int			size;

	size = ft_stack_size(stack);
	pos.from_top = -1;
	pos.from_bottom = -1;
	i = 0;
	while (stack)
	{
		if (stack->index <= limit)
		{
			pos.from_top = i;
			pos.from_bottom = size - i - 1;
			return (pos);
		}
		i++;
		stack = stack->next;
	}
	return (pos);
}
