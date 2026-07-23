/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dichacon <dichacon@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 17:57:00 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/23 17:12:18 by dichacon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int				count;
	struct s_stack	*next;
}	t_stack;

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
} t_counter;

/* FLAGS */

typedef struct s_config
{
	int		is_bench;
	char	*algo;
}	t_config;

/* PARSING */

int	ft_parse_flags(int argc, char **argv, t_config *config);
int	ft_parse_input(t_stack **stack, int argc, char **argv, int start);
int     ft_build_stack(t_stack **stack, char **argv, int start);
int	ft_validate_value(t_stack *stack, char *str, int *value);
int	ft_is_number(char *str);
int	ft_has_duplicate(t_stack *stack, int value);
long	ft_atol(char *str);

/* STACK */

t_stack *ft_create_node(int value);
t_stack *ft_last_node(t_stack *stack);
void    ft_add_back(t_stack **stack, t_stack *new);
void    ft_free_stack(t_stack **stack);
int     ft_stack_size(t_stack *stack);

/* SORT */

int     ft_is_sorted(t_stack *stack);
int     ft_find_min(t_stack *stack);
int     ft_find_max(t_stack *stack);
void    ft_assign_index(t_stack *stack);

/* STRATEGY */

double	ft_compute_disorder(t_stack *stack);

/* UTILS */

int     ft_strcmp(char *s1, char *s2);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    **ft_split(char const *s, char c);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlen(const char *s);
char    *ft_strdup(const char *s1);
void	*ft_memset(void *s, int c, size_t n);

/* OPERATIONS */
int	is_op_validate(t_stack **stack, t_counter *counter);
//SWAP
void	ft_sa(t_stack **a, t_counter *counter);
void	ft_sb(t_stack **b, t_counter *counter);
void	ft_ss(t_stack **a, t_stack **b, t_counter *counter);
// PUSH
void	ft_pa(t_stack **a, t_stack **b, t_counter *counter);
void	ft_pb(t_stack **a, t_stack **b, t_counter *counter);

#endif
