/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 18:38:53 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/18 18:41:11 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_simple(t_stack **a, t_stack **b)
{
	int	size;

	size = ft_stack_size(*a);
	if (size == 2)
		ft_sort_two(a);
	else if (size == 3)
		ft_sort_three(a);
	else
		ft_sort_five(a, b);
}
