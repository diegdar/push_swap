#include "../push_swap.h"

void	ft_push(t_stack **src, t_stack **dst)
{
	
}

void	pa(t_stack **a, t_stack **b)
{
	ft_push(b, a);
	write(1, "sa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	ft_swap(a, b);
	write(1, "sb\n", 3);
}