/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dichacon <dichacon@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 16:51:19 by dichacon          #+#    #+#             */
/*   Updated: 2026/07/23 20:25:49 by dichacon         ###   ########.fr       */
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
	if (!is_op_validate(b, counter))
		return ;
	ft_push(b, a);
	write(1, "pa\n", 3);
	counter->pa++;
	counter->total++;	
}

void	ft_pb(t_stack **a, t_stack **b, t_counter *counter)
{
	if (!is_op_validate(a, counter))
		return ;
	ft_push(a, b);
	write(1, "pb\n", 3);
	counter->pb++;
	counter->total++;	
}