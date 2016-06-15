/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 16:48:09 by kgani             #+#    #+#             */
/*   Updated: 2016/05/16 15:48:38 by kgani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		i;
	char		*s1;

	i = 0;
	s1 = dst;
	while (*src && i < len)
	{
		*s1++ = *src++;
		i++;
	}
	while (ft_strlen(src) < len && *s1)
		*s1++ = '\0';
	return (dst);
}
