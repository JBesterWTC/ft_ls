/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 00:12:42 by kgani             #+#    #+#             */
/*   Updated: 2016/05/15 10:29:37 by kgani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] != '\0')
	{
		if (little[j] == big[i])
			j++;
		else
		{
			i -= j;
			j = 0;
		}
		if (!little[j])
			return ((char *)(big + i - j + 1));
		i++;
	}
	return (NULL);
}
