/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:51:40 by malancar          #+#    #+#             */
/*   Updated: 2023/01/05 15:41:44 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_memmove(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			dest[i - 1] = src [i - 1];
			i--;
		}
		return (dest);
	}
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

void	ft_check(char **save, char *buf)
{
	if (*save)
			*save = ft_strjoin(*save, buf);
	if (!*save)
		*save = buf;
}

char	*ft_checkn(char **save, int n)
{
	char	*tmp;
	char	*line;

	line = NULL;
	line = ft_substr(*save, 0, n + 1);
	tmp = ft_substr(&(*save)[n + 1], 0, ft_strlen(&(*save)[n + 1]));
	free(*save);
	*save = tmp;
	return (line);
}

void	ft_check_read(char *buf, int r)
{
	if (r >= 0)
		buf[r] = '\0';
	else
		buf[0] = 0;
}

char	*get_next_line(int fd)
{
	static char		*save;
	int				r;
	int				n;
	char			*buf;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	n = -1;
	while (42)
	{
		if (save)
			n = ft_strchr(save, '\n');
		if (n >= 0)
			return (ft_checkn(&save, n));
		buf = malloc(sizeof(char) * BUFFER_SIZE + 1);
		if (!buf)
			return (NULL);
		r = read(fd, buf, BUFFER_SIZE);
		ft_check_read(buf, r);
		ft_check(&save, buf);
		if ((r <= 0 || r < BUFFER_SIZE) && ft_strchr(save, '\n') == -1)
			return (ft_strdup(&save));
	}
	return (NULL);
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
	
	//int i = 0;
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
		//i++;
		//printf("%d\n", i);
	}
	return (0);
}*/
