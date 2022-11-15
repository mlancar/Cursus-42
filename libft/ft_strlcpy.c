/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:59:50 by malancar          #+#    #+#             */
/*   Updated: 2022/11/12 18:46:14 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	j = ft_strlen(src);
	return (j);
}
/*#include <bsd/string.h>
int main(int ac, char ** av)
{
	if (ac == 3)
	{
		char dest[500];
		char dest1[500];

		printf("%ld\n", ft_strlcpy(dest, av[1], atoi(av[2])));
		printf("%ld\n", strlcpy(dest1, av[1], atoi(av[2])));
	}
}*/
