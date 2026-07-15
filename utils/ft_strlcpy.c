/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 16:38:29 by andrcarr          #+#    #+#             */
/*   Updated: 2026/06/07 01:21:18 by andrcarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
/*copiar un string al destino*/	
{
	size_t	i;

	if (dstsize > 0)
	{
		i = 0;
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst1[6];
	size_t	ret1;

	ret1 = ft_strlcpy(dst1, "HolaMundo", sizeof(dst1));

	printf("dst = %s\n", dst1);
	printf("ret = %zu\n", ret1);

	return (0);
}*/
