#include "../push_swap.h"

void	ft_choose_strategy(t_stack **a, t_stack **b,
		t_config *config, t_counter *counter)
{
	int	size;

	size = ft_stack_size(*a);
	if (size <= 1 || ft_is_sorted(*a))
		return ;
	if (size == 2)
		return (ft_sort_two(a, counter));
	if (size == 3)
		return (ft_sort_three(a, counter));
	if (size <= 5)
		return (ft_sort_five(a, b, counter));
	if (config->algo == SIMPLE)
		return (ft_simple(a, b, counter));
	if (config->algo == MEDIUM)
		return (ft_medium(a, b, counter));
	if (config->algo == COMPLEX)
		return (ft_complex(a, b, counter));
	if (config->disorder < 0.2)
	{
		config->algo = SIMPLE;
		ft_simple(a, b, counter);
	}
	else if (config->disorder < 0.5)
	{
		config->algo = MEDIUM;
		ft_medium(a, b, counter);
	}
	else
	{
		config->algo = COMPLEX;
		ft_complex(a, b, counter);
	}
}
