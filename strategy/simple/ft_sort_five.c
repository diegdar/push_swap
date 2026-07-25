/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 19:21:25 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/25 18:39:33 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_sort_five(t_stack **a, t_stack **b, t_counter *counter)
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
