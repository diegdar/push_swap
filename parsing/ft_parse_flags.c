/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 17:58:26 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/22 19:32:00 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_parse_flags(int argc, char **argv, t_config *config)
{
	int	i;

	i = 1;
	config->is_bench = 0;
	config->algo = ADAPTIVE;
	while (i < argc)
	{
		if (ft_strcmp(argv[i], "--bench") == 0)
		{
			if (config->is_bench)
				return (1);
			config->is_bench = 1;
		}
		else if (ft_strcmp(argv[i], "--simple") == 0)
		{
			if (config->algo != ADAPTIVE)
				return (1);
			config->algo = SIMPLE;
		}
		else if (ft_strcmp(argv[i], "--medium") == 0)
		{
			if (config->algo != ADAPTIVE)
				return (1);
			config->algo = MEDIUM;
		}
		else if (ft_strcmp(argv[i], "--complex") == 0)
		{
			if (config->algo != ADAPTIVE)
				return (1);
			config->algo = COMPLEX;
		}
		else if (ft_strcmp(argv[i], "--adaptive") == 0)
		{
			if (config->algo != ADAPTIVE)
				return (1);
		}
		else
			break ;
		i++;
	}
	config->start = i;
	if (config->start >= argc)
		return (1);
	return (0);
}
