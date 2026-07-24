/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_position.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 20:08:25 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/22 20:09:31 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_position	ft_find_position(t_stack *stack, int index)
{
	t_position	pos;
	int			size;
	int			i;

	size = ft_stack_size(stack);
	pos.from_top = -1;
	pos.from_bottom = -1;
	i = 0;
	while (stack)
	{
		if (stack->index == index)
		{
			pos.from_top = i;
			pos.from_bottom = size - i - 1;
			break ;
		}
		i++;
		stack = stack->next;
	}
i	return (pos);
}
