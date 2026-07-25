#include "../push_swap.h"

void	ft_swap(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

void	ft_sa(t_stack **a, t_counter *counter)
{
	ft_swap(a);
	if (counter)
	{
		write(1, "sa\n", 3);
		counter->sa++;
		counter->total++;
	}
}

void	ft_sb(t_stack **b, t_counter *counter)
{
	ft_swap(b);
	if (counter)
	{
		write(1, "sb\n", 3);
		counter->sb++;
		counter->total++;
	}
}

void	ft_ss(t_stack **a, t_stack **b, t_counter *counter)
{
	if (!a || !b || !*a || !*b)
		return ;
	if (!(*a)->next || !(*b)->next)
		return ;
	ft_swap(a);
	ft_swap(b);
	if (counter)
	{
		write(1, "ss\n", 3);
		counter->ss++;
		counter->total++;
	}
}
