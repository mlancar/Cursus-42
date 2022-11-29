/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_letter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:11:37 by malancar          #+#    #+#             */
/*   Updated: 2022/11/28 17:21:51 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_check_letter(char c)
{
	char	*str;
	int		i;

	i = 0;
	str = "cspdiuxX%";
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}
