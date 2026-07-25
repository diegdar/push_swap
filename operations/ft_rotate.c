/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 20:30:55 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/25 20:30:58 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate(t_stack **stack)
{
	t_stack	*first;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	*stack = first->next;
	first->next = NULL;
	ft_add_back(stack, first);
}

void	ft_ra(t_stack **a, t_counter *counter)
{
	ft_rotate(a);
	if (counter)
	{
		write(1, "ra\n", 3);
		counter->ra++;
		counter->total++;
	}
}

void	ft_rb(t_stack **b, t_counter *counter)
{
	ft_rotate(b);
	if (counter)
	{
		write(1, "rb\n", 3);
		counter->rb++;
		counter->total++;
	}
}

void	ft_rr(t_stack **a, t_stack **b, t_counter *counter)
{
	if (!a || !b || !*a || !*b)
		return ;
	if (!(*a)->next || !(*b)->next)
		return ;
	ft_rotate(a);
	ft_rotate(b);
	if (counter)
	{
		write(1, "rr\n", 3);
		counter->rr++;
		counter->total++;
	}
}
