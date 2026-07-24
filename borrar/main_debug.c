#include "../push_swap.h"
#include <stdio.h>

static void	print_stack(t_stack *stack, char name)
{
	printf("\n===== STACK %c =====\n", name);
	while (stack)
	{
		printf("value:%5d   index:%3d\n",
			stack->value,
			stack->index);
		stack = stack->next;
	}
	printf("-------------------------\n");
}

static char	*algo_name(t_algorithm algo)
{
	if (algo == SIMPLE)
		return ("SIMPLE");
	if (algo == MEDIUM)
		return ("MEDIUM");
	if (algo == COMPLEX)
		return ("COMPLEX");
	return ("ADAPTIVE");
}

static void	print_counter(t_counter counter)
{
	printf("\n===== COUNTER =====\n");
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
}

int	main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;
	t_config	config;
	t_counter	counter;

	a = NULL;
	b = NULL;
	ft_counter_init(&counter);
	if (argc < 2)
	{
		printf("Uso:\n");
		printf("./push_swap [flags] numeros\n");
		return (0);
	}
	if (ft_parse_flags(argc, argv, &config))
	{
		printf("Error: flags inválidas\n");
		return (1);
	}
	if (ft_parse_input(&a, argc, argv, &config))
		return (1);

	printf("\n========== CONFIG ==========\n");
	printf("bench     : %d\n", config.bench);
	printf("algorithm : %s\n", algo_name(config.algo));
	printf("start     : %d\n", config.start);

	print_stack(a, 'A');

	config.disorder = ft_compute_disorder(a);

	printf("\n========== DISORDER ==========\n");
	printf("%.4f\n", config.disorder);

	ft_assign_index(a);

	printf("\n========== INDEX ==========\n");
	print_stack(a, 'A');

	/* PROBAR LOS ALGORITMOS */

	/*
	ft_choose_strategy(&a, &b, &config, &counter);

	printf("\n========== RESULTADO ==========\n");
	print_stack(a, 'A');
	print_stack(b, 'B');

	print_counter(counter);
	*/

	ft_free_stack(&a);
	ft_free_stack(&b);
	return (0);
}
