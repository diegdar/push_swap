#include "push_swap.h"

t_stack	*last_node(t_stack *stack)
{
	t_stack *current;
	current = stack;
	if (!current)
		return (NULL);
	while (current->next)
		current = current->next;
	return (current);
}
