/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:09:53 by malancar          #+#    #+#             */
/*   Updated: 2022/11/23 14:22:36 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checkset(char const *str, char const c)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char const		*s2;
	int				i;
	unsigned int	start;
	size_t			len;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_checkset(set, s1[i]) != 0)
		i++;
	start = i;
	i = ft_strlen(s1) - 1;
	while (i > 0 && ft_checkset(set, s1[i]) != 0)
		i--;
	len = i - start + 1;
	s2 = ft_substr(s1, start, len);
	return ((char *)s2);
}

/*#include <stdio.h>
int main(int ac, char **av)
{
	(void)ac;
	char *s =  ft_strtrim(av[1], av[2]);
	printf("%s\n", s);
	free(s);
}*/
