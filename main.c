/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 13:25:59 by jbester           #+#    #+#             */
/*   Updated: 2016/06/17 11:47:57 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	main(int argc, char **argv)
{
	int	count;

	count = 1;
	if (argc == 1)
	{
		ft_sort(".");
	}
	else if (argc > 1)
	{
		//if (argv[1][0] == '-')
		//	ft_list_fld(argv, argc);
		//else
		//{
			while (argv[count])
			{
				ft_sort(argv[count]);
				count++;
			}
		//}
	}
}
