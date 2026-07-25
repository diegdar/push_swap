#include "../../push_swap.h"

void	ft_chunk_back(t_stack **a, t_stack **b, t_counter *counter)
{
	int	max;

	while (*b)
	{
		max = ft_find_max_index(*b);
		ft_rotate_to_top(b, max, 'b', counter);
		ft_pa(a, b, counter);
	}
}
