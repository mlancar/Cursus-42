/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:27:43 by malancar          #+#    #+#             */
/*   Updated: 2022/11/28 17:24:19 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putunbr(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
		len = len + ft_putunbr(n / 10);
	len = len + ft_putchar((n % 10) + 48);
	return (len);
}
