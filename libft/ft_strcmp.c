/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasiedu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 10:27:50 by sasiedu           #+#    #+#             */
/*   Updated: 2016/06/17 17:03:58 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	count1;

	count1 = 0;
	while (s1[count1] == s2[count1] && s1[count1] && s2[count1])
		count1++;
	return (s1[count1] - s2[count1]);
}
