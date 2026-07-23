/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dichacon <dichacon@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 19:32:01 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/23 17:47:09 by dichacon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

void	print_stack_debug(t_stack *stack, char name)
{
	printf("--- STACK %c ---\n", name);
	if (!stack)
	{
		printf("(vacío)\n\n");
		return ;
	}
	while (stack)
	{
		printf("[Dir: %p | Value: %5d | Index: %2d] -> Next: %p\n",
			(void *)stack,
			stack->value,
			stack->index,
			(void *)stack->next);
		stack = stack->next;
	}
	printf("------------------\n\n");
}

/// @brief 
/// @param argc 
/// @param argv 
/// @return 
int	main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	t_counter	counter;
	t_config	config;
	int			start;
	double		disorder;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
	{
		printf("Uso: ./a.out [flags] numeros\n");
		return (0);
	}

	printf("============= PARSE FLAGS =============\n");

	start = ft_parse_flags(argc, argv, &config);

	printf("bench : %d\n", config.is_bench);
	printf("algo  : %s\n", config.algo);
	printf("start : %d\n\n", start);

	printf("============= PARSE INPUT =============\n");

	if (ft_parse_input(&stack_a, argc, argv, start))
		return (1);

	printf("Parsing correcto.\n\n");

	printf("============= STACK CREADA =============\n");

	print_stack_debug(stack_a, 'A');

	printf("============= STACK UTILS =============\n");

	printf("Tamaño        : %d\n", ft_stack_size(stack_a));
	printf("Ordenado      : %s\n",
		ft_is_sorted(stack_a) ? "SI" : "NO");
	printf("Min           : %d\n", ft_find_min(stack_a));
	printf("Max           : %d\n\n", ft_find_max(stack_a));

	printf("============= DISORDER =============\n");

	disorder = ft_compute_disorder(stack_a);

	printf("Disorder      : %.4f\n", disorder);
	printf("Bench         : %.2f%%\n\n", disorder * 100.0);

	printf("============= ASSIGN INDEX =============\n");

	ft_assign_index(stack_a);

	print_stack_debug(stack_a, 'A');

	printf("============= FREE STACK =============\n");

	//ft_free_stack(&stack_a);

	//printf("stack_a == NULL ? %s\n", (stack_a == NULL) ? "SI" : "NO");

	printf("============= PRINT OPERATIONS =============\n");
	ft_memset(&counter, 0, sizeof(t_counter));
	//SWAP
	printf("\n-- Impresion de 'sa' ---");
	printf("\n>Before movement: \n\t*1st node: %p, \n\t*2nd node: %p", (void *)stack_a, (void *)stack_a->next);
	ft_sa(&stack_a, &counter);
	printf("\n>After movement: \n\t*1st node: %p, \n\t*2nd node: %p", (void *)stack_a, (void *)stack_a->next);
	//PUSH
	printf("\n\n-- Impresion de 'pb' ---\n");
	if (stack_b)
		printf(">Before movement: \n\t*value of 1st node in stack A: %d \n\t*value of 1st node in stack B: %d\n", stack_a->value, stack_b->value);
	else
		printf(">Before movement: \n\t*value of 1st node in stack A: %d \n\t*value of 1st node in stack B: (nil)\n", stack_a->value);
	ft_pb(&stack_a, &stack_b, &counter);
	if (stack_a)
		printf(">After movement: \n\t*value of 1st node in stack A: %d, \n\t*value of 1st node in stack B: %d\n", stack_a->value, stack_b->value);
	else
		printf(">After movement: \n\t*value of 1st node in stack A:(nil), \n\t*value of 1st node in stack B: %d\n", stack_b->value);
	
	return (0);
}
