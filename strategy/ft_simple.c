/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dichacon <dichacon@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 18:38:53 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/25 15:21:38 by dichacon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_two(t_stack **a, t_counter *counter)
{
	if ((*a)->value > (*a)->next->value)
		ft_sa(a, counter);
}

void	ft_sort_three(t_stack **a, t_counter *counter)
{
	int	max;
	
	max = ft_find_max(*a);
	if ((*a)->value == max)
		ft_ra(a, counter);
	else if ((*a)->next->value == max)
		ft_rra(a, counter);
	if (!ft_is_sorted(*a))
		ft_sa(a, counter);
}

void	ft_sort_large_args(t_stack **a, t_stack **b, t_counter *counter)
{
	while (ft_stack_size(*a) > 3)
	{
		while ((*a)->value != ft_find_min(*a))
		{
			if (ft_find_min(*a) == ft_last_node(*a)->value)
				ft_rra(a, counter);
			else
				ft_ra(a, counter);
		}
		ft_pb(a, b, counter);
	}
	ft_sort_three(a, counter);
	while (*b)
		ft_pa(b, a, counter);
}

void	ft_simple(t_stack **a, t_stack **b, t_counter *counter)
{
	int	size;
	
	if (ft_is_sorted(*a))
		return ;
	size = ft_stack_size(*a);
	if (size == 2)
		ft_sort_two(a, counter);
	else if (size == 3)
		ft_sort_three(a, counter);	
	else
		ft_sort_large_args(a, b, counter);		
}
