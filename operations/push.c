/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dichacon <dichacon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 16:51:19 by dichacon          #+#    #+#             */
/*   Updated: 2026/07/25 20:23:49 by dichacon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push(t_stack **src, t_stack **dst)
{
	t_stack	*node;

	node = *src;
	*src = node->next;
	node->next = *dst;
	*dst = node;
}

void	ft_pa(t_stack **b, t_stack **a, t_counter *counter)
{
	t_stack	*node;

	if (!is_op_validate(a, counter))
		return ;
	node = *b;
	*b = node->next;
	node->next = *a;
	*a = node;
	write(1, "pa\n", 3);
	counter->pa++;
	counter->total++;
}

void	ft_pb(t_stack **a, t_stack **b, t_counter *counter)
{
	t_stack	*node;

	if (!is_op_validate(a, counter))
		return ;
	node = *a;
	*a = node->next;
	node->next = *b;
	*b = node;
	write(1, "pb\n", 3);
	counter->pb++;
	counter->total++;
}