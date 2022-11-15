/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:32:19 by malancar          #+#    #+#             */
/*   Updated: 2022/11/09 11:43:02 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
		i++;
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int ac, char **av)
{
	if (ac == 4)
	printf("ft_strncmp : %d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
	printf("strncmp : %d\n", strncmp(av[1], av[2], atoi(av[3])));
}*/	
