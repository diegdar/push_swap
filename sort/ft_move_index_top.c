/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_min_top.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 19:04:15 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/21 19:26:29 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_move_index_top(t_stack **a, int index);

{
	int	position;
	int	size;
	int	rotations;

	position = ft_find_index_pos(*a, index);
	size = ft_stack_size(*a);
	if (position <= size / 2)
	{
		while (position > 0)
		{
			ra(a);
			position--;
		}
	}
	else
	{
		rotations = size - position;
		while (rotations > 0)
		{
			rra(a);
			rotations--;
		}
	}
}
