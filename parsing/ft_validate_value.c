/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 18:47:09 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/14 19:14:12 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_validate_value(t_stack *stack, char *str, int *value)
{
	long	n;

	if (!ft_is_number(str))
		return (1);
	n = ft_atol(str);
	if (n < INT_MIN || n > INT_MAX)
		return (1);
	if (ft_has_duplicate(stack, (int)n))
		return (1);
	*value = (int)n;
	return (0);
}
