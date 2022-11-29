/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:48:35 by malancar          #+#    #+#             */
/*   Updated: 2022/11/18 10:08:48 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	*str2;

	str2 = (unsigned char *)str;
	i = 0;
	while (str2[i])
	{
		if (str2[i] == (unsigned char)c)
			return ((char *)&str2[i]);
		i++;
	}
	if (c == 0)
		return ((char *)&str2[i]);
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>
int main(int ac, char **av)
{
	(void)ac;
	printf("ft_strchr :%s\n", ft_strchr(av[1], av[2][0]));
	printf("ft_strchr :%s\n", ft_strchr(av[1], *av[2]));
	
	//printf("ft_strchr :%s\n", ft_strchr(av[1], (*av)[6]));
	
	printf("strchr :%s\n", strchr(av[1], av[2][0]));
	printf("strchr :%s\n", strchr(av[1], *av[2]));
	
	//printf("strchr :%s\n", strchr(av[1], (*av)[6]));
}*/
