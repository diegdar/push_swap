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
	if (sixe <= 500)
		return (22);
	return (30);
}
