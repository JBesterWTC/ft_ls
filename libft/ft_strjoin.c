/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/20 09:03:35 by kgani             #+#    #+#             */
/*   Updated: 2016/05/20 10:13:15 by kgani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strjoin(char const *s1, char const *s2)
{
	int	length;
	char	*str;

	length = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(length * sizeof(char));
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	return (str);
}
