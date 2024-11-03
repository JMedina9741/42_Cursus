/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmedin <javmedin@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 21:26:33 by javmedin          #+#    #+#             */
/*   Updated: 2024/11/04 00:44:48 by javmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int nbr, char *base, int *count)
{
	if (nbr >= 16)
		ft_putnbr_base(nbr / 16, base, count);
	ft_putchar_fd(base[nbr % 16], 1, count);
	return (*count);
}