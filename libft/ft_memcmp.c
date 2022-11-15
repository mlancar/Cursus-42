/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:08:47 by malancar          #+#    #+#             */
/*   Updated: 2022/11/14 14:26:16 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s3;
	unsigned char	*s4;

	s3 = (unsigned char *)s1;
	s4 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s3[i] != s4[i])
			return (s3[i] - s4[i]);
		i++;
	}
	return (0);
}
/*int main(int ac, char **av)
{
	(void)ac;
	int j;
	int  i;

	i = ft_memcmp((char *)av[1], (char *)av[2], atoi(av[3]));
	j = memcmp((char *)av[1], (char *)av[2], atoi(av[3]));

	printf("ft_memcmp : %d\nmem_cmp : %d\n", i, j);
}*/
