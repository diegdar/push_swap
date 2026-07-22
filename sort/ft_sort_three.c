/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 17:52:04 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/22 19:25:46 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_three(t_stack **a, t_counter *counter)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->index;
	second = (*a)->next->index;
	third = (*a)->next->next->index;
	if (first < second && second < third)
		return ;
	if (first > second && second < third && first < third)
		ft_sa(a, counter);
	else if (first > second && second < third && first > third)
		ft_ra(a, counter);
	else if (first > second && second > third)
	{
		ft_ra(a, counter);
		ft_sa(a, counter);
	}
	else if (first < second && second > third && first < third)
	{
		ft_rra(a, counter);
		ft_sa(a, counter);
	}
	else if (first < second && second > third && first > third)
		ft_rra(a, counter);
}
