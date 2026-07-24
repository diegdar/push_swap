/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dichacon <dichacon@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 16:40:48 by dichacon          #+#    #+#             */
/*   Updated: 2026/07/23 21:21:25 by dichacon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(t_stack **stack)
{
	t_stack	*temp;

	temp = *stack;
	(*stack) = temp->next;
	temp->next = (*stack)->next;
	(*stack)->next = temp;
}

void	ft_sa(t_stack **a, t_counter *counter)
{
	if (!is_op_validate(a, counter))
		return ;
	ft_swap(a);
	write(1, "sa\n", 3);
	counter->sa++;
	counter->total++;
}

void	ft_sb(t_stack **b, t_counter *counter)
{
	if (!is_op_validate(b, counter))
		return ;	
	ft_swap(b);
	write(1, "sb\n", 3);
	counter->sb++;
	counter->total++;
}

void	ft_ss(t_stack **a, t_stack **b, t_counter *counter)
{
	if (!is_op_validate(a, counter) || !is_op_validate(b, counter))
		return ;
	ft_swap(a);
	ft_swap(b);
	write(1, "ss\n", 3);
	counter->ss++;
	counter->total++;
}