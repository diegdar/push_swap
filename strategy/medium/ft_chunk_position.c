#include "../push_swap.h"

int	ft_chunk_position(t_stack *stack, int limit)
{
	t_move	pos;
	int	i;
	int	size;

	size = ft_stack_size(stack);
	
	move.from_top = -1;
	move.from_bottom = -1;

	i = 0;
	while (stack)
	{
		if (stack->index <= limit)
		{
			pos.from_top = i;
			pos.from_bottom = size - i - 1;
			return (pos);
		}
		i++;
		stack = stack->next;
	}
	return (pos);
}
