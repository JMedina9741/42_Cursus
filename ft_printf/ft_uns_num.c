/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uns_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmedin <javmedin@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 21:12:25 by javmedin          #+#    #+#             */
/*   Updated: 2024/09/13 21:15:26 by javmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int    ft_uns_num(unsigned int num)
{
    int let;

    let = 0;
    if (num > 9)
    {
        let = ft_uns_num(num / 10);
        if (let == -1)
                return (-1);
        num = num % 10;
    }
    if (num <= 9)
    {
        if (ft_putchar(('0' + num)) == -1)
                return (-1);
        let++;
    }
    return (let);
}