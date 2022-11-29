/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:12:20 by malancar          #+#    #+#             */
/*   Updated: 2022/11/28 18:34:20 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex(unsigned long int n, char c)
{
	int		len;

	len = 0;
	if (n >= 16)
		len = len + ft_puthex((n / 16), c);
	if (n % 16 < 10)
		len = len + ft_putchar((n % 16) + 48);
	else
	{
		if (c == 'X')
			len = len + ft_putchar((n % 16) + 'A' - 10);
		else
			len = len + ft_putchar((n % 16) + 'a' - 10);
	}
	return (len);
}
