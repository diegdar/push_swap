/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dichacon <dichacon@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 19:32:01 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/24 16:38:04 by dichacon         ###   ########.fr       */
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
			stack,
			stack->value,
			stack->index,
			stack->next);
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

	printf("============= PRINT OPERATIONS =============\n");
	ft_memset(&counter, 0, sizeof(t_counter));
	//SWAP
	printf("\n>>>>>>>>>> SWAP >>>>>>>>>>>>>>>>>>>>>\n");	
	printf("\n-- Impresion de 'sa' ---\n");
	printf(">\fore movement>>\n");
	print_stack_debug(stack_a, 'A');	
	ft_sa(&stack_a, &counter);
	printf(">>After movement>>\n");
	print_stack_debug(stack_a, 'A');	
	//PUSH
	printf("\n>>>>>>>>>> PUSH >>>>>>>>>>>>>>>>>>>>>\n");	
	printf("\n\n-- Impresion de 'pb' ---\n");
	printf(">\fore movement>>\n");
	print_stack_debug(stack_a, 'A');
	print_stack_debug(stack_b, 'B');
	ft_pb(&stack_a, &stack_b, &counter);
	ft_pb(&stack_a, &stack_b, &counter);
	ft_pb(&stack_a, &stack_b, &counter);
	printf(">>After movements>>\n");
	print_stack_debug(stack_a, 'A');
	print_stack_debug(stack_b, 'B');	
	// ROTATE
	printf("\n>>>>>>>>>> ROTATE >>>>>>>>>>>>>>>>>>>>>\n");
	// Impresion de 'ra'
	printf("\n-- Impresion de 'ra' ---\n");
	printf(">>Before movement>>\n");
	print_stack_debug(stack_a, 'A');
	ft_ra(&stack_a, &counter);
	printf(">>After movement>>\n");
	print_stack_debug(stack_a, 'A');
	// Impresion de 'rb'
	printf("\n\n-- Impresion de 'rb' ---\n");
	printf(">>Before movement>>\n");
	print_stack_debug(stack_b, 'B');
	ft_rb(&stack_b, &counter);
	printf(">>After movement>>\n");
	print_stack_debug(stack_b, 'B');
	// Impresion de 'rr'
	printf("\n\n-- Impresion de 'rr' ---\n");
	printf(">>Before movement>>\n");
	print_stack_debug(stack_a, 'A');
	print_stack_debug(stack_b, 'B');
	ft_rr(&stack_a, &stack_b, &counter);
	printf(">>After movement>>\n");
	print_stack_debug(stack_a, 'A');
	print_stack_debug(stack_b, 'B');
	// REVERSE_ROTATE
	printf("\n>>>>>>>>>> REVERSER_ROTATE >>>>>>>>>>>>>>>>>>>>>\n");	
	// Impresion de 'rra'
	printf("\n-- Impresion de 'rra' ---\n");
	printf(">>Before movement>>\n");
	print_stack_debug(stack_a, 'A');
	print_stack_debug(stack_b, 'B');
	ft_rra(&stack_a, &counter);
	printf(">>After movement>>\n");
	print_stack_debug(stack_a, 'A');
	print_stack_debug(stack_b, 'B');
	// Impresion de 'rrb'
	printf("\n\n-- Impresion de 'rrb' ---\n");
	printf(">>Before movement>>\n");
	print_stack_debug(stack_a, 'A');
	print_stack_debug(stack_b, 'B');
	ft_rrb(&stack_b, &counter);
	printf(">>After movement>>\n");
	print_stack_debug(stack_a, 'A');
	print_stack_debug(stack_b, 'B');
	// Impresion de 'rrr'
	printf("\n\n-- Impresion de 'rrr' ---\n");
	printf(">>Before movement>>\n");
	print_stack_debug(stack_a, 'A');
	print_stack_debug(stack_b, 'B');
	ft_rrr(&stack_a, &stack_b, &counter);
	printf(">>After movement>>\n");
	print_stack_debug(stack_a, 'A');
	print_stack_debug(stack_b, 'B');
	
	printf("============= FREE STACK =============\n");
	ft_free_stack(&stack_a);
	printf("stack_a == NULL ? %s\n", (stack_a == NULL) ? "SI" : "NO");	
	return (0);
}
