/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 13:55:51 by jbester           #+#    #+#             */
/*   Updated: 2016/06/17 16:29:49 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LS_H__
# define __LS_H__
# include <unistd.h>
# include <dirent.h>
# include <sys/stat.h>
# include <pwd.h>
# include <sys/xattr.h>
# include <time.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft.h"

typedef struct	s_entry
{
	char			*name;
	char			*flags;
	struct s_entry	*next;
}				t_entry;

typedef struct	s_flags
{
	int	a_flag;
	int	l_flag;
	int	R_flag;
	int	t_flag;
	int	r_flag;
}				t_flags;

int		ft_compare(t_entry *head, t_entry *new);
//void	swap_node(t_entry *newNode, t_entry *head);
int		ft_sort(char *dir);

#endif
