/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dichacon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 17:57:00 by dichacon          #+#    #+#             */
/*   Updated: 2026/07/14 19:50:50 by dichacon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

int	is_op_validate(t_stack **stack, t_counter *counter)
{
	if (!stack || !*stack || !(*stack)->next)
		return (0);
	if (!counter)
		return (0);
	return (1);
}