/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:01:58 by malancar          #+#    #+#             */
/*   Updated: 2022/11/11 18:34:30 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)str;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	char *src1;
	char *dest1;

	src1 = ft_memset(av[1], *av[2], atoi(av[3]));
	dest1 = memset(av[1], *av[2], atoi(av[3]));
	printf("ft_memset : %s\nmemset : %s\n",	src1, dest1);
}*/
