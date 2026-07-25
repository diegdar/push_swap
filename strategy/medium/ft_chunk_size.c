/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chunk_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 14:43:24 by andrcarr          #+#    #+#             */
/*   Updated: 2026/07/25 14:43:26 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_chunk_size(int size)

{
	if (size <=10)
		return (3);
	if (size <= 25)
		return (5);
	if (size <= 50)
		return (7);
	if (size <= 100)
		return (10);
	if (size <= 200)
		return (15);
	if (size <= 500)
		return (22);
	return (30);
}
