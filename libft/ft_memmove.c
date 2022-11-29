/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:08:47 by malancar          #+#    #+#             */
/*   Updated: 2022/11/16 16:14:47 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest1;
	char	*src1;

	i = 0;
	dest1 = dest;
	src1 = (char *)src;
	if (dest1 > src1)
	{
		i = n;
		while (i > 0)
		{
			dest1[i - 1] = src1[i - 1];
			i--;
		}
		return (dest1);
	}
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest1);
}
/*int	main(void)
{
	char dest[500];
	char src[500] = "salut";

	printf("ft_memmove = %s\n memmove = %s\n", i
		(char *)ft_memmove(dest, src + 2, 4),
			(char *) memmove(dest, src + 2, 4));
}*/
