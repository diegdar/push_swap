/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 19:21:25 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/21 19:22:33 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_small(t_stack **a, t_stack **b)
{
	int	size;
	int	index;

	size = ft_stack_size(*a);
	index = 0;
	while (size > 3)
	{
		ft_move_index_top(a, index);
		pb(a, b);
		index++;
		size--;
	}
	ft_sort_three(a);
	while (*b)
		pa(a, b);
}
