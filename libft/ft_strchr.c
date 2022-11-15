/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:48:35 by malancar          #+#    #+#             */
/*   Updated: 2022/11/10 19:02:40 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
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
