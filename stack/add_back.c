#include "push_swap.h"

void	add_back(t_stack **stack, t_stack *new)
{
	t_stack *last;
	if (!stack || !new)
		return;
	if (*stack == NULL)
	{
		*stack = new;
		return;
	}
	last = last_node(*stack);
	last->next = new;
}
