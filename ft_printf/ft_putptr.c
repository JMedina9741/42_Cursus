/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmedin <javmedin@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:49:14 by javmedin          #+#    #+#             */
/*   Updated: 2024/11/04 00:47:41 by javmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_hex(unsigned long nb, int *count)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nb >= 16)
		ft_putnbr_hex(nb / 16, count);
	ft_putchar_fd(hex[nb % 16], 1, count);
	return (*count);
}

int	ft_putptr(void *ptr, int *count)
{
	unsigned long	nb;

	nb = (unsigned long)ptr;
	if (ptr == 0)
		ft_putstr_fd("(nil)", 1, count);
	else
	{
		ft_putstr_fd("0x", 1, count);
		ft_putnbr_hex(nb, count);
	}
	return (*count);
}
