/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 13:25:59 by jbester           #+#    #+#             */
/*   Updated: 2016/06/14 15:56:48 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	main(int argc, char **argv)
{
	int	count;

	count = 1;
	if (argc == 1)
	{
		ft_straight(".");
	}
	else if (argc > 1)
	{
		while (count < argc)
		{
			if (argc > 2)
			{
				ft_putstr(argv[count]);
				ft_putstr(":\n");
			}
			ft_straight(argv[count]);
			if (count < (argc - 1))
				ft_putchar('\n');
			count++;
		}
	}
}
