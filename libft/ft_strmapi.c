/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:10:01 by malancar          #+#    #+#             */
/*   Updated: 2022/11/23 14:19:51 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s1;

	i = 0;
	if (!s || !f)
		return (NULL);
	s1 = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!s1)
		return (NULL);
	while (s[i])
	{
		s1[i] = f(i, s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*#include <stdio.h>
char	f(unsigned int i, char c)
{
	(void)i;
	char	a;

	a = c - 32;
	return (a);
}
int	main()
{
	char	*s;
	s = ft_strmapi("oui", f);
	printf("%s\n", s);
}*/
