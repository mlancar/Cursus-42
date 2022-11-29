/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:57:22 by malancar          #+#    #+#             */
/*   Updated: 2022/11/16 17:00:35 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>

void	ft_size(long long int nb, long long int *size)
{
	if (nb == 0)
		*size = 1;
	while (nb > 0)
	{
		nb = nb / 10;
		(*size)++;
	}
}

void	ft_putnbr(long long int nb, char *tab, int i)
{
	i = i - 1;
	tab[i] = (nb % 10) + 48;
	if (nb >= 10)
		ft_putnbr ((nb / 10), tab, i);
}

char	*ft_itoa(int n)
{
	int				i;
	long long int	nb;
	long long int	size;
	char			*tab;

	nb = n;
	size = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		size++;
	}
	ft_size(nb, &size);
	i = size;
	tab = malloc(sizeof(char) * size + 1);
	if (!tab)
		return (NULL);
	tab[0] = '-';
	ft_putnbr(nb, tab, i);
	tab[i] = '\0';
	return (tab);
}
/*
int	main(int ac,char **av)
{
	(void)ac;
	printf("ft_itoa : %s\n", ft_itoa(atoi(av[1])));
}*/
