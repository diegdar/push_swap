#include "../push_swap.h"

void	ft_choose_strategy(t_stack **a, t_stack **b,
			t_config *config, t_counter *counter)
{
	int	size;

	size = ft_stack_size(*a);
	if (size <= 1 || ft_is_sorted(*a))
		return ;
	if (size <= 5)
	{
		ft_sort_small(a, b, counter);
		return ;
	}
	if (config->algo == SIMPLE)
	{
		ft_simple(a, b, counter);
		return ;
	}
	if (config->algo == MEDIUM)
	{
		ft_medium(a, b, counter);
		return ;
	}
	if (config->algo == COMPLEX)
	{
		ft_complex(a, b, counter);
		return ;
	}
	if (config->disorder < 0.2)
		ft_simple(a, b, counter);
	else if (config->disorder < 0.5)
		ft_medium(a, b, counter);
	else
		ft_complex(a, b, counter);
}
