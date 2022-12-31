/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:13:39 by malancar          #+#    #+#             */
/*   Updated: 2022/12/31 15:56:57 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

void	ft_strcat(char *src, char *src2, char *s3)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[i])
	{
		s3[i] = src[i];
		i++;
	}
	while (src2[j])
	{
		s3[i] = src2[j];
		j++;
		i++;
	}
	s3[i] = '\0';
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	int		len;
	char	*s3;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	len = i + j;
	s3 = malloc(sizeof(char) * (len + 1));
	if (!s3)
		return (0);
	ft_strcat(s1, s2, s3);
	free(s1);
	free(s2);
	return (s3);
}

char	*ft_substr(char	*s, int start, int len)
{
	char	*s2;
	int		i;

	i = 0;
	if (start >= ft_strlen(s))
	{
		s2 = malloc(sizeof(char) * 1);
		if (!s2)
			return (NULL);
		s2[i] = '\0';
		return (s2);
	}
	if (len > ft_strlen(&s[start]))
		len = ft_strlen(&s[start]);
	s2 = malloc(sizeof(char) * len + 1);
	if (!s2)
		return (NULL);
	while (s[start + i] && i < len)
	{
		s2[i] = s[start + i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	*ft_strdup(char **s)
{
	char	*s1;
	int		i;

	if (!*s)
		return (NULL);
	if (**s == 0)
	{
		free(*s);
		*s = NULL;
		return (NULL);
	}
	if (*s)
	{
		i = ft_strlen(*s);
		s1 = malloc(sizeof(char) * (i + 1));
		if (!s1)
			return (NULL);
	}
	ft_memmove(s1, *s, i);
	free(*s);
	*s = NULL;
	s1[i] = '\0';
	return (s1);
}

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
