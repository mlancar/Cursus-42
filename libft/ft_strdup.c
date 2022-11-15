/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:48:59 by malancar          #+#    #+#             */
/*   Updated: 2022/11/11 20:07:25 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s1;
	size_t	i;

	i = ft_strlen(s);
	s1 = malloc(sizeof(char) * (i + 1));
	if (!s1)
		return (NULL);
	ft_memmove(s1, s, i);
	s1[i] = '\0';
	return (s1);
}	
