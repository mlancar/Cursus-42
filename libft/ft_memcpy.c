/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:09:51 by malancar          #+#    #+#             */
/*   Updated: 2022/11/16 15:51:07 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src1;
	unsigned char	*dest1;

	i = 0;
	dest1 = dest;
	src1 = (unsigned char *)src;
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest1);
}
/*int main(int ac, char **av)
{
	(void)ac;
	char myfct[100];
	char rlfct[100];
	
	ft_memcpy(myfct, av[1], atoi(av[2]));
	memcpy(rlfct, av[1], atoi(av[2]));

	printf("ft_memcpy : %s\nmemcpy : %s\n", myfct, rlfct);
}*/
