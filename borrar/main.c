/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 19:32:01 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/14 19:32:19 by andrcarr         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_config	config;
	int			start;
	double		disorder;

	stack_a = NULL;

	if (argc < 2)
	{
		printf("Uso: ./a.out [flags] numeros\n");
		return (0);
	}

	printf("============= PARSE FLAGS =============\n");

	start = parse_flags(argc, argv, &config);

	printf("bench : %d\n", config.bench);
	printf("algo  : %s\n", config.algo);
	printf("start : %d\n\n", start);

	printf("============= PARSE INPUT =============\n");

	if (parse_input(&stack_a, argc, argv, start))
		return (1);

	printf("Parsing correcto.\n\n");

	printf("============= STACK CREADA =============\n");

	print_stack_debug(stack_a, 'A');

	printf("============= STACK UTILS =============\n");

	printf("Tamaño        : %d\n", stack_size(stack_a));
	printf("Ordenado      : %s\n",
		is_sorted(stack_a) ? "SI" : "NO");
	printf("Min           : %d\n", find_min(stack_a));
	printf("Max           : %d\n\n", find_max(stack_a));

	printf("============= DISORDER =============\n");

	disorder = compute_disorder(stack_a);

	printf("Disorder      : %.4f\n", disorder);
	printf("Bench         : %.2f%%\n\n", disorder * 100.0);

	printf("============= ASSIGN INDEX =============\n");

	assign_index(stack_a);

	print_stack_debug(stack_a, 'A');

	printf("============= FREE STACK =============\n");

	free_stack(&stack_a);

	printf("stack_a == NULL ? %s\n",
		(stack_a == NULL) ? "SI" : "NO");

	return (0);
}
