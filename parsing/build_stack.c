/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 17:57:20 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/14 17:38:57 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	build_stack(t_stack **stack, char **argv, int start)
{
	int			i;
	long		value;
	t_stack		*new;

	i = start;
	while (argv[i])
	{
		if (!is_number(argv[i]))
			return (1);
		value = ft_atol(argv[i]);
		if (value < INT_MIN || value > INT_MAX)
			return (1);
		if (has_duplicate(*stack, (int)value))
			return (1);
		new = create_node((int)value);
		if (!new)
			return (1);
		add_back(stack, new);
		i++;
	}
	return (0);
}
