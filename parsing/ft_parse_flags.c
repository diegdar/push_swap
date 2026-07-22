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
	config->bench = 0;
	config->algo = "adaptive";
	while (i < argc)
	{
		if (ft_strcmp(argv[i], "--bench") == 0)
			config->bench = 1;
		else if (ft_strcmp(argv[i], "--simple") == 0)
			config->algo = "simple";
		else if (ft_strcmp(argv[i], "--medium") == 0)
			config->algo = "medium";
		else if (ft_strcmp(argv[i], "--complex") == 0)
			config->algo = "complex";
		else if (ft_strcmp(argv[i], "--adaptive") == 0)
			config->algo = "adaptive";
		else
			break ;
		i++;
	}
	config->start = i;
	return (0);
}
