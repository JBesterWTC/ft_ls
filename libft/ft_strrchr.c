/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 23:55:13 by kgani             #+#    #+#             */
/*   Updated: 2016/05/15 09:08:53 by kgani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	n;

	str = (char *)s;
	n = ft_strlen(s);
	while (n-- != 0)
	{
		if (str[n] == (char)c)
			return (str + n);
	}
	return (NULL);
}
