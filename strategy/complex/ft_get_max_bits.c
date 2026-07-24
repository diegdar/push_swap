#include "../../push_swap.h"

int	ft_get_max_bits(t_stack *stack)
{
	int	max;
	int	bits;

	max = ft_find_max_index(stack);
	bits = 0;
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}
