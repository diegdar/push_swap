/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 18:38:53 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/22 19:22:03 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_simple(t_stack **a, t_stack **b, t_counter *counter)
{
	int	size;

	size = ft_stack_size(*a);
	if (size == 2)
		ft_sort_two(a, counter);
	else if (size == 3)
		ft_sort_three(a, counter);
	else
		ft_sort_small(a, b, counter);
}
