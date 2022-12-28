/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:51:40 by malancar          #+#    #+#             */
/*   Updated: 2022/12/28 18:50:18 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	int		r;
	int		n;
	static char		*save;
	char	*line;
	char	*buf;
	char	*tmp;
	
	line = NULL;
	buf = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	save = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!save)
		return (NULL);
	save = NULL;
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
		r = read(fd, buf, BUFFER_SIZE);
		if (r == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[r] = '\0';
		if (save)
			save = ft_strjoin(save, buf);
		if (n > 0)
			return (ft_strdup(&save));
		if (r == 0 || r < BUFFER_SIZE)
		{
			if (!buf)
				free(buf);
			if (!save)
				save = buf;
			return(ft_strdup(&save));
		}
		if (!save && buf)
			save = buf;
	}
	return (line);
}
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int		main()
{
	int	fd;
	char *line;
	int i = 0;


	fd = open("text.txt", O_RDONLY);
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
		i++;
		printf("%d\n", i);
	}
	return (0);
}
