/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:34:32 by malancar          #+#    #+#             */
/*   Updated: 2022/11/23 14:11:39 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		i++;
		j++;
	}
	s3[i] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		len;
	char	*s3;	

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	len = i + j;
	s3 = malloc(sizeof(char) * (len + 1));
	if (!s3)
		return (0);
	ft_strcat((char *)s1, (char *)s2, s3);
	return (s3);
}
/*#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("s3 : %s\n", ft_strjoin(av[1], av[2]));
}*/
