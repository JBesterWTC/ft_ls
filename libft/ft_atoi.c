#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t res;
	size_t sign;

	sign = 1;
	res = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str && ft_isdigit(*str))
	{
		res *= 10;
		res += *str++ - '0';
	}
	return (res * sign);
}
