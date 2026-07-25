/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_debug.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24                                    +#+#+#+#+#+   +#+  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	print_stack(t_stack *stack, char name)
{
	printf("\nSTACK %c\n", name);
	while (stack)
	{
		printf("value = %2d | index = %2d\n",
			stack->value, stack->index);
		stack = stack->next;
	}
	printf("--------------------------\n");
}

int	main(void)
{
	t_stack		*a;
	t_stack		*b;
	t_counter	counter;

	a = NULL;
	b = NULL;
	ft_counter_init(&counter);

	/* Cambia estos valores para probar */
	ft_add_back(&a, ft_create_node(2));
	ft_add_back(&a, ft_create_node(1));
	ft_add_back(&a, ft_create_node(5));
	ft_add_back(&a, ft_create_node(8));
	ft_add_back(&a, ft_create_node(7));
	ft_add_back(&a, ft_create_node(4));

	ft_assign_index(a);

	printf("\n===== INICIAL =====\n");
	print_stack(a, 'A');
	print_stack(b, 'B');

	/* ========================================= */
	/*             PRUEBAS                       */
	/* ========================================= */

	/* Operaciones */
	/*
	ft_sa(&a, &counter);
	ft_sb(&b, &counter);
	ft_ss(&a, &b, &counter);

	ft_pb(&a, &b, &counter);
	ft_pa(&b, &a, &counter);

	ft_ra(&a, &counter);
	ft_rb(&b, &counter);
	ft_rr(&a, &b, &counter);

	ft_rra(&a, &counter);
	ft_rrb(&b, &counter);
	ft_rrr(&a, &b, &counter);
	*/

	/* Utilidades */
	/*
	ft_rotate_to_top(&a, 2, 'a', &counter);
	*/

	/* Estrategias */
	/*
	ft_simple(&a, &b, &counter);
	*/

	
	ft_medium(&a, &b, &counter);
	

	/*
	ft_complex(&a, &b, &counter);
	*/

	/* ========================================= */

	printf("\n===== FINAL =====\n");
	print_stack(a, 'A');
	print_stack(b, 'B');

	printf("\n===== CONTADOR =====\n");
	printf("sa   : %d\n", counter.sa);
	printf("sb   : %d\n", counter.sb);
	printf("ss   : %d\n", counter.ss);
	printf("pa   : %d\n", counter.pa);
	printf("pb   : %d\n", counter.pb);
	printf("ra   : %d\n", counter.ra);
	printf("rb   : %d\n", counter.rb);
	printf("rr   : %d\n", counter.rr);
	printf("rra  : %d\n", counter.rra);
	printf("rrb  : %d\n", counter.rrb);
	printf("rrr  : %d\n", counter.rrr);
	printf("TOTAL: %d\n", counter.total);

	ft_free_stack(&a);
	ft_free_stack(&b);
	return (0);
}
