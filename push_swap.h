/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 17:57:00 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/14 19:50:50 by andrcarr         ###   ########.fr       */
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
	struct s_stack	*next;
}	t_stack;

/* FLAGS */

typedef struct s_config
{
	int		bench;
	char	*algo;
}	t_config;

/* PARSING */

int	parse_flags(int argc, char **argv, t_config *config);
int	parse_input(t_stack **stack, int argc, char **argv, int start);
int	parsing(t_stack *stack, char *str, int *value);
int	is_number(char *str);
int	has_duplicate(t_stack *stack, int value);
long	ft_atol(char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);

/* STACK */

int     build_stack(t_stack **stack, char **argv, int start);
t_stack *create_node(int value);
t_stack *last_node(t_stack *stack);
void    add_back(t_stack **stack, t_stack *new);
void    free_stack(t_stack **stack);
int     stack_size(t_stack *stack);

/* SORT */

int     is_sorted(t_stack *stack);
int     find_min(t_stack *stack);
int     find_max(t_stack *stack);
void    assign_index(t_stack *stack);

/* STRATEGY */

double	compute_disorder(t_stack *stack);

#endif
