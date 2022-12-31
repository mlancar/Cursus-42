/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:51:40 by malancar          #+#    #+#             */
/*   Updated: 2022/12/31 16:49:37 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_check(char **save, char *buf)
{
	if (*save)
			*save = ft_strjoin(*save, buf);
	if (!*save)
		*save = buf;
}

char	*get_next_line(int fd)
{
	static char		*save;
	int				r;
	int				n;
	char			*line;
	char			*buf;
	char			*tmp;

	line = NULL;
	n = -1;
	while (42)
	{
		if (save)
			n = ft_strchr(save, '\n');
		if (n >= 0)
		{
			line = ft_substr(save, 0, n + 1);
			tmp = ft_substr(&save[n + 1], 0, ft_strlen(&save[n + 1]));
			free(save);
			save = tmp;
			return (line);
		}	
		buf = malloc(sizeof(char) * BUFFER_SIZE + 1);
		if (!buf)
			return (NULL);
		r = read(fd, buf, BUFFER_SIZE);
		if (r >= 0)
			buf[r] = '\0';
		ft_check(&save, buf);
		if ((r <= 0 || r < BUFFER_SIZE) && ft_strchr(save, '\n') == -1)
			return (ft_strdup(&save));
	}
	return (line);
}
/*#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int		main()
{
	int	fd;
	char *line;
	
	fd = open("text.txt", O_RDONLY);
	
	int i = 0;
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("res = %s", line);
		free(line);
		i++;
		printf("%d\n", i);
	}
	return (0);
}*/
