#include "../../push_swap.h"

void	ft_simple(t_stack **a, t_stack **b, t_counter *counter)
{
	int	min_index;

	while (*a)
	{
		min_index = ft_find_min_index(*a);
		ft_rotate_to_top(a, min_index, 'a', counter);
		ft_pb(a, b, counter);
	}
	while (*b)
		ft_pa(a, b, counter);
}