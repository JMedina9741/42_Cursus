/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_cap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmedin <javmedin@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:49:14 by javmedin          #+#    #+#             */
/*   Updated: 2024/09/13 20:59:48 by javmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int  puthexa_long(char *bstr, unsigned long long n, int c)
{
    unsigned long long  b;

    b = ft_strlen(bstr);
    if (n >= b)
    {
        c = puthexa_long(bstr, n / b, c);
        if (c == -1)
                return (-1);
        if (write (1, &bstr[n], 1) == -1)
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

static int  puthexa_uns(char *bstr, unsigned int n, int c)
{
    unsigned int    b;

    b = ft_strlen(bstr);
    if (n >= b)
    {
        c = puthexa_uns(bstr, n / b, c);
        if (c == -1)
                return (-1);
        if (write(1, &bstr[n % b], 1) == -1)
                return (-1);
        c++;
    }
    else if (n < b)
    {
        if (write(1, &bstr[n], 1) == -1)
                return (-1);
        c++;
    }
    return (c);
}

int ft_hexa_cap(int n)
{
    int let;

    let = 0;
    if (n >= 0)
            let = puthexa_long("0123456789ABCDEF", n, let);
    else if (n < 0)
            let = puthexa_uns("0123456789ABCDEF", n, let);
    return (let);
}