/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dichacon <dichacon@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 17:54:35 by dichacon          #+#    #+#             */
/*   Updated: 2026/07/23 21:22:13 by dichacon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate(t_stack **stack)
{
	t_stack *temp;

	temp = *stack;
	*stack = temp->next;
	temp->next = NULL;
	ft_add_back(stack, temp);
}

void	ft_ra(t_stack **a, t_counter *counter)
{
	if (!is_op_validate(a, counter))
		return ;
	ft_rotate(a);
	write(1, "ra\n", 3);
	counter->ra++;
	counter->total++;	
}

void	ft_rb(t_stack **b, t_counter *counter)
{
	if (!is_op_validate(b, counter))
		return ;	
	ft_rotate(b);
	write(1, "rb\n", 3);
	counter->rb++;
	counter->total++;	
}

void	ft_rr(t_stack **a, t_stack **b, t_counter *counter)
{
	if (!is_op_validate(a, counter) || !is_op_validate(b, counter))
		return ;
	ft_rotate(a);
	ft_rotate(b);
	write(1, "rr\n", 3);
	counter->rr++;
	counter->total++;	
}