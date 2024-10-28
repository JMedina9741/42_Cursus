/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_mincap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmedin <javmedin@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 21:01:52 by javmedin          #+#    #+#             */
/*   Updated: 2024/10/28 19:57:23 by javmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Helper function to recursively print a number in hexadecimal format
static int	hexa_rec(const char *bstr, unsigned long long num, int count)
{
	unsigned long long	bslen;

	bslen = ft_strlen(bstr);

	// Base case for zero, ensuring "0" is printed if num is initially 0
	if (num == 0 && count == 0)
	{
		if (write(1, &bstr[0], 1) == -1)
			return (-1);
		return (-1);
	}

	// Recursive call for non-zero values
	if (num >= bslen)
	{
		count = hexa_rec(bstr, num / bslen, count);
		if (count == -1)  // Error handling for recursive call
			return (-1);
	}
	// Write the current digit and increment count
	if (write(1, &bstr[num % bslen], 1) == -1)
		return (-1);
	return (count + 1);
}

// Main function to print an integer in uppercase hexadecimal
int	ft_hexa_mincap(int n)
{
	int	let;

        let = 0;

	if (n < 0)
		// For negative values, cast to unsigned int to handle two's complement representation
		return (hexa_rec("0123456789abcdef", (unsigned int)n, let));
	else
		// For non-negative values, treat as unsigned long long
		return (hexa_rec("0123456789abcdef", (unsigned long long)n, let));
}