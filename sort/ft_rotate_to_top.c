#include "../push_swap.h"

void	ft_rotate_to_top(t_stack **stack, int index,
			char stack_name, t_counter *counter)
{
	t_position	pos;

	pos = ft_find_position(*stack, index);
	if (pos.from_top <= pos.from_bottom)
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
