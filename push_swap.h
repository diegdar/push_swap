/* ESTRUCTURA */

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

/* PARSING */

int	is_number(char *str);
long	ft_atol(char *str);
int	has_duplicate(t_stack *stack, int value);
void	init_stack(t_stack **stack, char **argv);
void	error_exit(t_stack **stack);
