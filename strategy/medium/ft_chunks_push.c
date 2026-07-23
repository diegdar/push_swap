#include "../push_swap.h"

void	ft_chunks_push(t_stack **a, t_stack **b, t_counter *counter)
{
	int	chunk;
	int	limit;
	int	middle;

	chunk = ft_chunk_size(ft_stack_size(*a));
	limit = chunk - 1;
	while (*a)
	{
		middle = limit - chunk / 2;
		if ((*a)->index <= limit)
		{
			ft_pb(a, b, counter);
			if (*b && (*b)->index < middle)
				ft_rb(b, counter);
			limit++;
		}
		else
			ft_chunk_rotate(a, limit, counter);
	}
}
