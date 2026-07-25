#include "../push_swap.h"

size_t	ft_strlen(const char *s)
/*calcular el largo de un texto */
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
