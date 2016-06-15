/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 11:46:37 by kgani             #+#    #+#             */
/*   Updated: 2016/05/15 09:07:47 by kgani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		len_dst;
	char		*s1;
	const char	*s2;

	s1 = dst;
	s2 = src;
	i = size;
	while (i-- != 0 && *s1 != '\0')
		s1++;
	len_dst = s1 - dst;
	i = size - len_dst;
	if (!i)
		return (len_dst + ft_strlen(src));
	while (*s2 != '\0')
	{
		if (i-- != 1)
			*s1++ = *s2;
		s2++;
	}
	*s1 = '\0';
	return (len_dst + (s2 - src));
}
