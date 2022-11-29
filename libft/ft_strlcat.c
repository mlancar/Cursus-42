/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:26:39 by malancar          #+#    #+#             */
/*   Updated: 2022/11/17 14:13:47 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	srclen;
	size_t	dstlen;

	i = 0;
	j = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size <= dstlen)
		return (size + srclen);
	while (dst[i])
		i++;
	while (src[j] && (j < size - dstlen - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (srclen + dstlen);
}
/*#include <stdio.h>
#include <bsd/string.h>
int main()
{
	char src[100] = "cavahgfjyhfguljjj";
	char dst[100] = "saljhghjkgjhgjhubkjbkjhb";
	char dst2[100] = "saljhghjkgjhgjhubkjbkjhb";
	int a = ft_strlcat(dst, src, 110);
	int b = strlcat(dst2, src, 110);
	printf("ft_strlcat = %d, %s\n strlcat = %d, %s\n", a, dst, b, dst2);
}*/
