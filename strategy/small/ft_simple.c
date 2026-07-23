#include "../push_swap.h"

void	ft_simple(t_stack **a, t_stack **b, t_counter *counter)
{
	int	size;
	int	min_index;

	size = ft_stack_size(*a);
	while (size > 0)
	{
		min_index = ft_find_min_index(*a);
		ft_move_index_top(a, min_index, counter);
		ft_pb(a, b, counter);
		size--;
	}
	while (*b)
		ft_pa(a, b, counter);
}
