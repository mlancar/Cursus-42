/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:30:02 by malancar          #+#    #+#             */
/*   Updated: 2022/11/12 19:12:38 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*s1;

	i = 0;
	s1 = (char *)s;
	while (i < n)
	{
		s1[i] = '\0';
		i++;
	}
}
/*int	main(int ac, char **av)
{
	(void)ac;
	char *fk;
	char *rl;

	fk = ft_bzero(av[1], atoi(av[2]));
	rl = bzero(av[1], atoi(av[2]));
	
	printf("ft_bzero : %s\nbzero : %s\n", fk, rl);
}*/
/*int	main(void)
{
	char str[] = "12345";
	char *str2 = ft_strdup(str);
	printf("str = %s\n", str);
	printf("str2 = %s\n", str2);
	for (int i = 0; i < 20; i++)
		printf("pour i = %d : %d\n", i, str[i]);
	ft_bzero(str, 6);
	bzero(str2, 6);
	for (int i = 0; i < 6; i++)
		printf("ft_bzero : pour i = %d : %d\n", i, str[i]);
	for (int i = 0; i < 6; i++)
		printf("bzero : pour i = %d : %d\n", i, str2[i]);
}*/
