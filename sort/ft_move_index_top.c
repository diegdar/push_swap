/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_index_top.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 19:04:15 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/22 19:27:37 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_move_index_top(t_stack **a, int index, t_counter *counter);

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
			ft_ra(a, counter);
			position--;
		}
	}
	else
	{
		rotations = size - position;
		while (rotations > 0)
		{
			ft_rra(a, counter);
			rotations--;
		}
	}
}
