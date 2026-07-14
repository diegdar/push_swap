/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 17:57:20 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/14 19:53:58 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	build_stack(t_stack **stack, char **argv, int start)
{
	int			i;
	int			value;
	t_stack		*new;

	i = start;
	while (argv[i])
	{
		if (parsing(*stack, argv[i], &value))
			return (1);
		new = create_node(value);
		if (!new)
			return (1);
		add_back(stack, new);
		i++;
	}
	return (0);
}
