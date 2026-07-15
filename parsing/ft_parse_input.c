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

static void	ft_free_split(char **split)
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

static int	ft_parse_error(t_stack **stack, char **split)
{
	ft_free_stack(stack);
	ft_free_split(split);
	write(2, "Error\n", 6);
	return (1);
}

int	ft_parse_input(t_stack **stack, int argc, char **argv, int start)
{
	char	**split;

	split = NULL;
	if (start == argc - 1)
	{
		split = ft_split(argv[start], ' ');
		if (!split || !split[0])
			return (ft_parse_error(stack, split));
		if (ft_build_stack(stack, split, 0))
			return (ft_parse_error(stack, split));
		ft_free_split(split);
	}
	else
	{
		if (ft_build_stack(stack, argv, start))
			return (ft_parse_error(stack, NULL));
	}
	return (0);
}
