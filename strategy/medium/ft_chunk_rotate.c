#include "../../push_swap.h"

void	ft_chunk_rotate(t_stack **a, int limit, t_counter *counter)
{
	t_position	pos;

	pos = ft_chunk_position(*a, limit);
	if (pos.from_top == -1)
		return ;
	if (pos.from_top <= pos.from_bottom)
		ft_ra(a, counter);
	else
		ft_rra(a, counter);
}
