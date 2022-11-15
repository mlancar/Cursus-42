/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:40:35 by malancar          #+#    #+#             */
/*   Updated: 2022/11/15 16:46:22 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;

	size_t i;
	size_t j;

	j = 0;
       	i = ft_strlen(&s[start]);
	if (i > len)
		i = len;
		
	s2 = malloc(sizeof(char) * (i + 1));
	if (!s2)
		return (NULL);
	while (j < i)
	{
		s2[j] = s[start + j];
		j++;
	}
	s2[i] = '\0';
	return (s2);
}
/*int	main(int ac, char **av)
{
	//char s[100] ="salutcavaouiettoi";
	//unsigned int x = 1;
	//unsigned int y = 17;
	(void)ac;

	printf("ft_substr : %s\n", ft_substr(av[1], atoi(av[2]), atoi(av[3])));
}*/
