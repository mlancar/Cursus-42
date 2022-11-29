/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:40:35 by malancar          #+#    #+#             */
/*   Updated: 2022/11/23 14:10:42 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		s2 = malloc(sizeof(char) * 1);
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
/*int	main()
{
	char s[100] = "0123456789";
	unsigned int x = 9;
	unsigned int y = 10;
	

	printf("ft_substr : %s\n", ft_substr(s, x, y));
}*/
