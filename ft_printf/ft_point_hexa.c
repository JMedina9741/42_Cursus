/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmedin <javmedin@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 21:23:40 by javmedin          #+#    #+#             */
/*   Updated: 2024/09/13 21:24:20 by javmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hexa_pointer(char *bstr, unsigned long long n, int c)
{
	unsigned long long	b;

	b = ft_strlen(bstr);
	if (n >= b)
	{
		c = hexa_pointer(bstr, n / b, c);
		if (c == -1)
			return (-1);
		if (write (1, &bstr[n % b], 1) == -1)
			return (-1);
		c++;
	}
	else if (n < b)
	{
		if (write (1, &bstr[n], 1) == -1)
			return (-1);
		c++;
	}
	return (c);
}

int	ft_point_hexa(void *p)
{
	unsigned long long	pointer;
	int					let;

	let = 0;
	pointer = (unsigned long long)p;
	if (!p)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	if (write(1, "0x", 2) != 2)
		return (-1);
	let = hexa_pointer("0123456789abcdef", pointer, let);
	if (let == (-1))
		return (-1);
	let += 2;
	return (let);
}