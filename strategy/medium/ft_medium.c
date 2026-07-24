#include "../../push_swap.h"

void	ft_medium(t_stack **a, t_stack **b, t_counter *counter)
{
	ft_chunks_push(a, b, counter);
	ft_chunk_back(a, b, counter);
}
