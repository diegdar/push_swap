/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 20:30:04 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/25 20:30:06 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push(t_stack **src, t_stack **dst)
{
	t_stack	*node;

	if (!src || !*src || !dst)
		return ;
	node = *src;
	*src = node->next;
	node->next = *dst;
	*dst = node;
}

void	ft_pa(t_stack **b, t_stack **a, t_counter *counter)
{
	if (!b || !*b)
		return;
	ft_push(b, a);
	if (counter)
	{
		write(1, "pa\n", 3);
		counter->pa++;
		counter->total++;
	}
}

void	ft_pb(t_stack **a, t_stack **b, t_counter *counter)
{
	if (!a || !*a)
		return ;
	ft_push(a, b);
	if (counter)
	{
		write(1, "pb\n", 3);
		counter->pb++;
		counter->total++;
	}
}
