#include "push_swap.h"

void	init_stack(t_stack **stack, char **argv)
{
	int			i;
	long		value;
	t_stack		*new;

	i = 1;
	while (argv[i])
	{
		if (!is_number(argv[i]))
			error_exit(stack);
		value = ft_atol(argv[i]);
		if (value < INT_MIN || value > INT_MAX)
			error_exit(stack);
		if (has_duplicate(*stack, (int)value))
			error_exit(stack);
		new = create_node((int)value);
		if (!new)
			error_exit(stack);
		add_back(stack, new);
		i++;
	}
}
