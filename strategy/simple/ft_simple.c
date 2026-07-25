/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 14:44:35 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/25 14:44:37 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_simple(t_stack **a, t_stack **b, t_counter *counter)
{
	int	size;
	int	index;

	size = ft_stack_size(*a);
	index = 0;
	while (size > 3)
	{
		ft_rotate_to_top(a, index, 'a', counter);
		ft_pb(a, b, counter);
		index++;
		size--;
	}
	ft_sort_three(a, counter);
	while (*b)
		ft_pa(b, a, counter);
}
