#include "libft.h"

int	ft_count_UInbr(unsigned int num, int base)
{
	int	count;

	count = 0;
	if ((int)num < 0)
	{
		num *= -1;
		count++;
	}
	while (num != 0)
	{
		num /= base;
		count++;
	}
	return (count);
}
