#include "../push_swap.h"

void	ft_reverse_rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*prev;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	prev = NULL;
	last = *stack;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	ft_rra(t_stack **a, t_counter *counter)
{
	ft_reverse_rotate(a);
	if (counter)
	{
		write(1, "rra\n", 4);
		counter->rra++;
		counter->total++;
	}
}

void	ft_rrb(t_stack **b, t_counter *counter)
{
	ft_reverse_rotate(b);
	if (counter)
	{
		write(1, "rrb\n", 4);
		counter->rrb++;
		counter->total++;
	}
}

void	ft_rrr(t_stack **a, t_stack **b, t_counter *counter)
{
	if (!a || !b || !*a || !*b)
		return ;
	if (!(*a)->next || !(*b)->next)
		return ;
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
	if (counter)
	{
		write(1, "rrr\n", 4);
		counter->rrr++;
		counter->total++;
	}
}
