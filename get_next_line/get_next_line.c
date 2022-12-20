/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:51:40 by malancar          #+#    #+#             */
/*   Updated: 2022/12/20 18:54:43 by malancar         ###   ########.fr       */
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
	n = -1;
	while (42)
	{
		if (save)
			n = ft_strchr(save, '\n');
		if (n >= 0)
		{
			line = ft_substr(save, 0, n + 1);
			tmp = ft_substr(&save[n + 1], 0, ft_strlen(&save[n + 1]));
			//free(save);
			//free(buf);
			save = tmp;
			return (line);
		}	
		buf = malloc(sizeof(char) * BUFFER_SIZE + 1);
		if (!buf)
			return (NULL);
		r = read(fd, buf, BUFFER_SIZE);
		buf[r] = '\0';
		if (save)
			save = ft_strjoin(save, buf);
		else
			save = buf;
		if (r <= 0 || r < BUFFER_SIZE)
			return(ft_strdup(&save));
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
	//int i = 0;


	fd = open("bible.txt", O_RDONLY);
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("amen : %s", line);
		free(line);
		//i++;
		//printf("%d\n", i);
	}
	return (0);
}
