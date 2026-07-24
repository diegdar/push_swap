/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 19:33:57 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/22 19:35:30 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_parse_error(t_stack **stack, char **split)
{
	ft_free_stack(stack);
	ft_free_split(split);
	write(2, "Error\n", 6);
	return (1);
}

int	ft_parse_input(t_stack **stack, int argc, char **argv, t_config *config)
{
	char	**split;

	split = NULL;
	if (config->start == argc - 1)
	{
		split = ft_split(argv[config->start], ' ');
		if (!split || !split[0])
			return (ft_parse_error(stack, split));
		if (ft_build_stack(stack, split, 0))
			return (ft_parse_error(stack, split));
		ft_free_split(split);
	}
	else
	{
		if (ft_build_stack(stack, argv, config->start))
			return (ft_parse_error(stack, NULL));
	}
	return (0);
}
