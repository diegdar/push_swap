#include "../../push_swap.h"

static void	ft_process_bit(t_stack **a, t_stack **b,
				int bit, t_counter *counter)
{
	int	size;
	int	i;

	size = ft_stack_size(*a);
	i = 0;
	while (i < size)
	{
		if ((((*a)->index >> bit) & 1) == 1)
			ft_ra(a, counter);
		else
			ft_pb(a, b, counter);
		i++;
	}
	while (*b)
		ft_pa(a, b, counter);
}

void	ft_radix(t_stack **a, t_stack **b, t_counter *counter)
{
	int	max_bits;
	int	bit;

	max_bits = ft_get_max_bits(*a);
	bit = 0;
	while (bit < max_bits)
	{
		ft_process_bit(a, b, bit, counter);
		bit++;
	}
}
