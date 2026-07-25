
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

/******************************************************************************/
/* STRUCTURES                                                                 */
/******************************************************************************/

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

typedef enum e_algorithm
{
	SIMPLE,
	MEDIUM,
	COMPLEX,
	ADAPTIVE
}	t_algorithm;

typedef struct s_config
{
	int				is_bench;
	t_algorithm		algo;
	int				start;
	double			disorder;
}	t_config;

typedef struct s_position
{
	int				from_top;
	int				from_bottom;
}	t_position;

typedef struct s_counter
{
	int	sa;
	int	sb;
	int	ss;
	int	pa;
	int	pb;
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int	rrr;
	int	total;
}	t_counter;

/******************************************************************************/
/* PARSING                                                                    */
/******************************************************************************/

int			ft_parse_flags(int argc, char **argv, t_config *config);
int			ft_parse_input(t_stack **stack,
				int argc, char **argv, t_config *config);
int			ft_build_stack(t_stack **stack, char **argv, int start);

int			ft_validate_value(t_stack *stack, char *str, int *value);
int			ft_is_number(char *str);
int			ft_has_duplicate(t_stack *stack, int value);
long		ft_atol(char *str);

/******************************************************************************/
/* STACK                                                                      */
/******************************************************************************/

t_stack		*ft_create_node(int value);
t_stack		*ft_last_node(t_stack *stack);

void		ft_add_back(t_stack **stack, t_stack *new);
void		ft_free_stack(t_stack **stack);

int			ft_stack_size(t_stack *stack);

/******************************************************************************/
/* SORT                                                                       */
/******************************************************************************/

void		ft_assign_index(t_stack *stack);

int			ft_is_sorted(t_stack *stack);

int			ft_find_min_index(t_stack *stack);
int			ft_find_max_index(t_stack *stack);
t_position			ft_find_position(t_stack *stack, int index);

void		ft_rotate_to_top(t_stack **stack,
				int index, char stack_id, t_counter *counter);

/******************************************************************************/
/* STRATEGIES                                                                 */
/******************************************************************************/

double		ft_compute_disorder(t_stack *stack);

void		ft_choose_strategy(t_stack **a,
				t_stack **b,
				t_config *config,
				t_counter *counter);

/* SIMPLE */

void		ft_simple(t_stack **a,
				t_stack **b,
				t_counter *counter);

void		ft_sort_two(t_stack **a,
				t_counter *counter);

void		ft_sort_three(t_stack **a,
				t_counter *counter);

void		ft_sort_five(t_stack **a,
				t_stack **b,
				t_counter *counter);

/* MEDIUM */

void		ft_medium(t_stack **a,
				t_stack **b,
				t_counter *counter);

void		ft_chunks_push(t_stack **a,
				t_stack **b,
				t_counter *counter);

void		ft_chunk_back(t_stack **a,
				t_stack **b,
				t_counter *counter);

t_position	ft_chunk_position(t_stack *stack,
				int limit);

int			ft_chunk_size(int size);

/* COMPLEX */

void		ft_complex(t_stack **a,
				t_stack **b,
				t_counter *counter);

void		ft_radix(t_stack **a,
				t_stack **b,
				t_counter *counter);

int			ft_get_max_bits(t_stack *stack);

/******************************************************************************/
/* OPERATIONS                                                                 */
/******************************************************************************/

/* Internal */

void		ft_swap(t_stack **stack);
void		ft_push(t_stack **src, t_stack **dst);
void		ft_rotate(t_stack **stack);
void		ft_reverse_rotate(t_stack **stack);

/* Swap */

void		ft_sa(t_stack **a, t_counter *counter);
void		ft_sb(t_stack **b, t_counter *counter);
void		ft_ss(t_stack **a,
				t_stack **b,
				t_counter *counter);

/* Push */

void		ft_pa(t_stack **b,
				t_stack **a,
				t_counter *counter);

void		ft_pb(t_stack **a,
				t_stack **b,
				t_counter *counter);

/* Rotate */

void		ft_ra(t_stack **a,
				t_counter *counter);

void		ft_rb(t_stack **b,
				t_counter *counter);

void		ft_rr(t_stack **a,
				t_stack **b,
				t_counter *counter);

/* Reverse Rotate */

void		ft_rra(t_stack **a,
				t_counter *counter);

void		ft_rrb(t_stack **b,
				t_counter *counter);

void		ft_rrr(t_stack **a,
				t_stack **b,
				t_counter *counter);

/******************************************************************************/
/* UTILS                                                                      */
/******************************************************************************/

void		ft_counter_init(t_counter *counter);

void		ft_print_bench(t_config *config,
				t_counter *counter);

char		**ft_split(char const *s, char c);
void		ft_free_split(char **split);

char		*ft_strdup(const char *s);
char		*ft_substr(char const *s,
				unsigned int start,
				size_t len);

int			ft_strcmp(char *s1, char *s2);

size_t		ft_strlen(const char *s);
size_t		ft_strlcpy(char *dst,
				const char *src,
				size_t dstsize);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putunsigned_fd(unsigned int n, int fd);
void	ft_putpercent_fd(double value, int fd);
void	ft_print_bench(t_config *config,
			t_counter *counter);

#endif
