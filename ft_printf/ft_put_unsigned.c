/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmedin <javmedin@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 21:12:25 by javmedin          #+#    #+#             */
/*   Updated: 2024/11/04 00:48:55 by javmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned(unsigned int n, int *count)
{
	if (n == 0)
		ft_putchar_fd('0', 1, count);
	else
	{
		if (n / 10 != 0)
			ft_put_unsigned(n / 10, count);
		ft_putchar_fd((n % 10) + '0', 1, count);
		while (n > 0)
			n /= 10;
	}
	return (*count);
}