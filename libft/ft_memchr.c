/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:34:26 by malancar          #+#    #+#             */
/*   Updated: 2022/11/18 09:57:55 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;

	i = 0;
	s1 = (unsigned char *)str;
	while (i < n)
	{
		if (s1[i] == (unsigned char)c)
			return (&s1[i]);
		i++;
	}
	return (NULL);
}
/*int	main(void)
{
	const char str[500] = "banana";
	int c = 'a';
	size_t n = 2;
	
	printf("ft_memchr : %s\nmemchr : %s\n", 
		(char *)ft_memchr(str, c, n), (char *)memchr(str, c, n));
}*/
