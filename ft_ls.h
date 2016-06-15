/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 13:55:51 by jbester           #+#    #+#             */
/*   Updated: 2016/06/14 16:10:56 by jbester          ###   ########.fr       */
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

typedef struct s_dir
{
	char	*name;
	t_dir	*next;
}				t_dir;

int	ft_straight(char *dir);

#endif
