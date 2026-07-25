/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_medium.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 14:43:56 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/25 14:43:58 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_medium(t_stack **a, t_stack **b, t_counter *counter)
{
	ft_chunks_push(a, b, counter);
	ft_chunk_back(a, b, counter);
}
