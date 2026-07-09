#include "push_swap.h"

t_stack	*create_node(int value)
{
	t_stack *node;
	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = 0;
	node->next = NULL;
	return (node);
}
