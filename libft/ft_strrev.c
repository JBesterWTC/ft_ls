#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	*str1;

	str1 = ft_strnew(ft_strlen(str));
	i = ft_strlen(str) - 1;
	j = 0;
	while (i >= 0)
	{
		str1[j] = str[i];
		i--;
		j++;
	}
	str1[j] = '\0';
	return (str1);
}
