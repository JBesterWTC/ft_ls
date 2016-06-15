#include "libft.h"

char	*ft_convert(unsigned int num, int base)
{
	int			len;
	int			temp;
	size_t		i;
	static char	bases[] = "0123456789abcdef";
	char		*save;

	temp = num;
	i = 0;
	len = ft_count_UInbr(num, base);
	save = ft_strnew(len + 1);
	while (temp != 0)
	{
		save[i] = bases[temp % base];
		temp = temp / base;
		i++;
	}
	save[i] = '\0';
	save = ft_strrev(save);
	return (save);
}
