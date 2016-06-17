/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_uinum.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasiedu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 15:37:24 by sasiedu           #+#    #+#             */
/*   Updated: 2016/06/12 01:07:24 by sasiedu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_count_uinum(unsigned int num, int base)
{
	int		count;

	count = 0;
	if (num == 0)
		return (1);
	if ((int)num < 0)
	{
		num = num * -1;
		count++;
	}
	while (num != 0)
	{
		num = num / base;
		count++;
	}
	return (count);
}
