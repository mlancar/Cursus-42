/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:35:27 by malancar          #+#    #+#             */
/*   Updated: 2022/11/28 17:23:34 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int n)
{
	int				len;
	long long int	nb;

	len = 0;
	nb = n;
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
		len++;
	}
	if (nb >= 10)
		len = len + ft_putnbr(nb / 10);
	len = len + ft_putchar((nb % 10) + 48);
	return (len);
}
