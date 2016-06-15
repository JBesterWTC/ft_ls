/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 13:34:30 by jbester           #+#    #+#             */
/*   Updated: 2016/06/14 16:23:25 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	ft_straight(char *dir)
{
	DIR				*d;
	struct dirent	*dPr;

	d = opendir(dir);
	while ((dPr = readdir(d)) != NULL)
	{
		if (dPr->d_name[0] != '.')
		{
			ft_putstr(dPr->d_name);
			ft_putchar('\n');
		}
	}
	return (0);
}

int	ft_alph_sort(
