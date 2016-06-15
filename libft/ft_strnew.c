#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = ft_memalloc(size);
	if (str != NULL)
		return(str);
	return (str);
}
