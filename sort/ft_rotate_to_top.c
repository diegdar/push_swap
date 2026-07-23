#include "../push_swap.h"

void	ft_rotate_to_top(t_stack **stack, int index,
			char stack_name, t_counter *counter)
{
	int	position;
	int	size;

	position = ft_find_position(*stack, index);
	size = ft_stack_size(*stack);
	if (position <= size / 2)
	{
		while ((*stack)->index != index)
		{
			if (stack_name == 'a')
				ft_ra(stack, counter);
			else
				ft_rb(stack, counter);
		}
	}
	else
	{
		while ((*stack)->index != index)
		{
			if (stack_name == 'a')
				ft_rra(stack, counter);
			else
				ft_rrb(stack, counter);
		}
	}
}
