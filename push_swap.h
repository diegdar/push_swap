#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

/* ESTRUCTURA */

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

/* STACK */

t_stack	*create_node(int value);
t_stack	*last_node(t_stack *stack);
void	add_back(t_stack **stack, t_stack *new);
void	free_stack(t_stack **stack);

/* PARSING */

int	is_number(char *str);
long	ft_atol(char *str);
int	has_duplicate(t_stack *stack, int value);
void	init_stack(t_stack **stack, char **argv);
void	error_exit(t_stack **stack);

/* UTILS */

int	stack_size(t_stack *stack);
int	is_sorted(t_stack *stIack);
int	find_min(t_stack *stack);
int	find_max(t_stack *stack);
void	assign_index(t_stack *stack);

#endif
