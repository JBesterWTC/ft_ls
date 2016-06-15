/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 16:28:44 by kgani             #+#    #+#             */
/*   Updated: 2016/05/16 15:27:00 by kgani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*dst;

	i = ft_strlen(s1);
	dst = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	j = 0;
	if (dst != NULL)
	{
		while(j < i)
		{
			dst[j] = s1[j];
			j++;
		}
	}
	else
		return (NULL);
	return (dst);
}
