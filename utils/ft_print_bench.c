/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bench.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 14:55:23 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/27 19:30:43 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../push_swap.h"

static char	*ft_requested(t_algorithm algo)
{
	if (algo == ADAPTIVE)
		return ("Adaptive");
	if (algo == SIMPLE)
		return ("Simple");
	if (algo == MEDIUM)
		return ("Medium");
	return ("Complex");
}

static char	*ft_used(t_algorithm algo)
{
	if (algo == SMALL_NUMBERS)
		return ("Special case (2 - 5 numbers)");
	if (algo == SIMPLE)
		return ("Simple / (O(n²))");
	if (algo == MEDIUM)
		return ("Medium / (O(n√n))");
	return ("Complex / (O(n log n))");
}

static void	ft_print_strategy(t_config *config)
{
	ft_putstr_fd("[bench] strategy (request): ", 2);
	ft_putstr_fd(ft_requested(config->algo), 2);
	ft_putchar_fd('\n', 2);
	ft_putstr_fd("[bench] strategy (used): ", 2);
	if (config->algo == ADAPTIVE)
		ft_putstr_fd("Adaptive / ", 2);
	ft_putstr_fd(ft_used(config->used_algo), 2);
	ft_putchar_fd('\n', 2);
}

static void	ft_print_disorder(double disorder)
{
	int	p;
	int	i;
	int	d;

	p = (int)(disorder * 10000);
	i = p / 100;
	d = p % 100;
	ft_putstr_fd("[bench] disorder: ", 2);
	ft_putnbr_fd(i, 2);
	ft_putchar_fd('.', 2);
	if (d < 10)
		ft_putchar_fd('0', 2);
	ft_putnbr_fd(d, 2);
	ft_putstr_fd("%\n", 2);
}

static void	ft_print_line(char *name, int value)
{
	ft_putstr_fd(name, 2);
	ft_putnbr_fd(value, 2);
	ft_putchar_fd('\n', 2);
}

static void	ft_print_ops(t_counter *c)
{
	ft_putstr_fd("sa  : ", 2);
	ft_putnbr_fd(c->sa, 2);
	ft_putstr_fd("    sb  : ", 2);
	ft_putnbr_fd(c->sb, 2);
	ft_putstr_fd("    ss  : ", 2);
	ft_putnbr_fd(c->ss, 2);
	ft_putstr_fd("    pa  : ", 2);
	ft_putnbr_fd(c->pa, 2);
	ft_putstr_fd("    pb  : ", 2);
	ft_putnbr_fd(c->pb, 2);
	ft_putchar_fd('\n', 2);
	ft_putstr_fd("ra  : ", 2);
	ft_putnbr_fd(c->ra, 2);
	ft_putstr_fd("    rb  : ", 2);
	ft_putnbr_fd(c->rb, 2);
	ft_putstr_fd("    rr  : ", 2);
	ft_putnbr_fd(c->rr, 2);
	ft_putstr_fd("    rra : ", 2);
	ft_putnbr_fd(c->rra, 2);
	ft_putstr_fd("    rrb : ", 2);
	ft_putnbr_fd(c->rrb, 2);
	ft_putstr_fd("    rrr : ", 2);
	ft_putnbr_fd(c->rrr, 2);
	ft_putchar_fd('\n', 2);
}

void	ft_print_bench(t_config *config, t_counter *c)
{
	ft_print_disorder(config->disorder);
	ft_print_strategy(config);
	ft_print_line("[bench] total_ops : ", c->total);
	ft_print_ops(c);
}
