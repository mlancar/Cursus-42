/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 23:05:11 by malancar          #+#    #+#             */
/*   Updated: 2022/11/23 15:05:56 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	tab = malloc(size * nmemb);
	if (!tab)
		return (NULL);
	ft_bzero(tab, size * nmemb);
	return (tab);
}
/*int main()					
{
	
	int	*tab;
	int	*tab1;
	int	size = 4;
	int	slt = sizeof(int);


	tab = ft_calloc(slt, size);
	tab1 = calloc(slt, size);
	printf("ft_calloc : ");
	int i = -1;
	while (++i < size)
		printf("%d ", tab[i]);
	printf("\ncalloc : ");
	 i = -1;
	while (++i < size)
		printf("%d ", tab1[i]);
	printf("\n");
	
}*/
