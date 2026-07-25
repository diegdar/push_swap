/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compute_disorder.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 18:02:08 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/14 18:02:11 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

double	ft_compute_disorder(t_stack *stack)
{
	int		size;
	double	mistakes;
	double	total_pairs;
	t_stack	*current_i;
	t_stack	*current_j;

	size = ft_stack_size(stack);
	if (size <= 1)
		return (0.0);
	mistakes = 0.0;
	total_pairs = 0.0;
	current_i = stack;
	while (current_i)
	{
		current_j = current_i->next;
		while (current_j)
		{
			total_pairs += 1.0;
			if (current_i->value > current_j->value)
				mistakes += 1.0;
			current_j = current_j->next;
		}
		current_i = current_i->next;
	}
	return (mistakes / total_pairs);
}
