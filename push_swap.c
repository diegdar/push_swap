#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;
	t_config	config;
	t_counter	counter;

	if (argc < 2)
		return (0);
	a = NULL;
	b = NULL;
	ft_counter_init(&counter);
	if (ft_parse_flags(argc, argv, &config))
		return (write(2, "Error\n", 6), 1);
	if (ft_parse_input(&a, argc, argv, &config))
		return (1);
	if (ft_is_sorted(a))
	{
		ft_free_stack(&a);
		return (0);
	}
	ft_assign_index(a);
	config.disorder = ft_compute_disorder(a);
	ft_choose_strategy(&a, &b, &config, &counter);
	if (config.is_bench)
		ft_print_bench(&config, &counter);
	ft_free_stack(&a);
	ft_free_stack(&b);
	return (0);
}
