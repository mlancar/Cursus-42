/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_fr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:52:39 by malancar          #+#    #+#             */
/*   Updated: 2022/11/14 17:30:05 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	while (n >= '0' && n <= '9')
	{
		ft_putnbr_fdfd(n / 10);
		ft_putnbr_fd(n % 10);
		n++;
	}
	ft_putchar_fd(n + 48);
}
int main()
{
	ft_putnbr_fd('1', 1);
}