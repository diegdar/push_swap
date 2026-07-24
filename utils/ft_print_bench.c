#include "../push_swap.h"

static void	ft_print_disorder(double disorder)
{
	int	percent;
	int	integer;
	int	decimal;

	percent = (int)(disorder * 10000);
	integer = percent / 100;
	decimal = percent % 100;
	ft_putstr_fd("disorder   : ", 2);
	ft_putnbr_fd(integer, 2);
	ft_putchar_fd('.', 2);
	if (decimal < 10)
		ft_putchar_fd('0', 2);
	ft_putnbr_fd(decimal, 2);
	ft_putstr_fd("%\n", 2);
}

static void	ft_print_algorithm(t_algorithm algo)
{
	if (algo == SIMPLE)
	{
		ft_putstr_fd("strategy: Simple\n", 2);
		ft_putstr_fd("/ O(n^2)\n", 2);
	}
	else if (algo == MEDIUM)
	{
		ft_putstr_fd("strategy: Medium\n", 2);
		ft_putstr_fd("/ : O(n*sqrt(n))\n", 2);
	}
	else
	{
		ft_putstr_fd("strategy: Complex\n", 2);
		ft_putstr_fd("/ O(n log n)\n", 2);
	}
}

static void	ft_print_counter(t_counter *counter)
{
	ft_putstr_fd("total_ops: ", 2);
	ft_putnbr_fd(counter->total, 2);
	ft_putstr_fd("\n\n", 2);
	ft_putstr_fd("sa  : ", 2);
	ft_putnbr_fd(counter->sa, 2);
	ft_putstr_fd("\nsb  : ", 2);
	ft_putnbr_fd(counter->sb, 2);
	ft_putstr_fd("\nss  : ", 2);
	ft_putnbr_fd(counter->ss, 2);
	ft_putstr_fd("\npa  : ", 2);
	ft_putnbr_fd(counter->pa, 2);
	ft_putstr_fd("\npb  : ", 2);
	ft_putnbr_fd(counter->pb, 2);
	ft_putstr_fd("\nra  : ", 2);
	ft_putnbr_fd(counter->ra, 2);
	ft_putstr_fd("\nrb  : ", 2);
	ft_putnbr_fd(counter->rb, 2);
	ft_putstr_fd("\nrr  : ", 2);
	ft_putnbr_fd(counter->rr, 2);
	ft_putstr_fd("\nrra : ", 2);
	ft_putnbr_fd(counter->rra, 2);
	ft_putstr_fd("\nrrb : ", 2);
	ft_putnbr_fd(counter->rrb, 2);
	ft_putstr_fd("\nrrr : ", 2);
	ft_putnbr_fd(counter->rrr, 2);
	ft_putchar_fd('\n', 2);
}

void	ft_print_bench(t_config *config, t_counter *counter)
{
	ft_putstr_fd("\n========== BENCHMARK ==========\n", 2);
	ft_print_disorder(config->disorder);
	ft_print_algorithm(config->algo);
	ft_putchar_fd('\n', 2);
	ft_print_counter(counter);
	ft_putstr_fd("===============================\n", 2);
}
