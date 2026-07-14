/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 19:33:57 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/14 19:56:17 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	free_split(char **split)
{
	int	i;

	if (!split)
		return ;
	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static int	parse_error(t_stack **stack, char **split)
{
	free_stack(stack);
	free_split(split);
	write(2, "Error\n", 6);
	return (1);
}

int	parse_input(t_stack **stack, int argc, char **argv, int start)
{
	char	**split;

	split = NULL;
	if (start == argc - 1)
	{
		split = ft_split(argv[start], ' ');
		if (!split || !split[0])
			return (parse_error(stack, split));
		if (build_stack(stack, split, 0))
			return (parse_error(stack, split));
		free_split(split);
	}
	else
	{
		if (build_stack(stack, argv, start))
			return (parse_error(stack, NULL));
	}
	return (0);
}
