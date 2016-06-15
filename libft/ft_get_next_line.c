/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/20 11:08:29 by kgani             #+#    #+#             */
/*   Updated: 2016/05/20 15:16:33 by kgani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_get_next_line.h"

static char	*ft_realloc(char *str, int size)
{
	char		*new;

	if (!size)
		return (str);
	new = ft_strnew(ft_strlen(str) + size);
	if (!new)
		return (NULL);
	ft_strcat(new, str);
	ft_strdel(&str);
	return (new);
}

static int	ft_get_the_end(char *line, char *buf)
{
	int			i;

	i = 0;
	while (line[i] != '\0')
	{
		if (line[i] == '\n')
		{
			line[i] = '\0';
			*buf = '\0';
			ft_strcat(buf, &line[i + 1]);
			return (-1);
		}
		i++;
	}
	*buf = '\0';
	return (0);
}

int	ft_get_next_line(const int fd, char **line)
{
	int			i;
	static char	buff[BUFF_SIZE + 1];

	if (fd < 0 || line == NULL)
		return (-1);
	*line = ft_strnew(BUFF_SIZE);
	ft_strcat(*line, buff);
	*buff = '\0';
	i = BUFF_SIZE;
	while (ft_get_the_end(*line, buff) != -1 && i == BUFF_SIZE)
	{
		i = read(fd, buff, BUFF_SIZE);
		if (i == -1)
			return (-1);
		buff[i] = '\0';
		*line = ft_realloc(*line, i);
		ft_strcat(*line, buff);
	}
	if (**line == '\0' && ft_strlen(buff) == 0 && i != BUFF_SIZE)
		return (0);
	return (1);
}
