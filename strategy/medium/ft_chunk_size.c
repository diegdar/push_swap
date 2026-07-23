#include "../push_swap.h"

int	ft_chunk_size(int size)

{
	if (size <=10)
		return (3);
	if (size <= 20)
		return (5);
	if (size <= 40)
		return (8);
	if (size <= 60)
		return(12);
	if (size <= 80)
		return (16);
	if (size <= 100)
		return (20);
	if (size <= 200)
		return (30);
	return (45);
}
