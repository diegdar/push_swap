#include "../push_swap.h"

void	ft_putunsigned_fd(unsigned int n, int fd)
{
	if (n >= 10)
		ft_putunsigned_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}
