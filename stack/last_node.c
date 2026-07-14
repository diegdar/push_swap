/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 17:59:58 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/14 19:24:58 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*last_node(t_stack *stack)
{
	t_stack	*current;

	current = stack;
	if (!current)
		return (NULL);
	while (current->next)
		current = current->next;
	return (current);
}
