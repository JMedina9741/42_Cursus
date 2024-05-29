/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javiermedina <javiermedina@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:36:31 by javiermedin       #+#    #+#             */
/*   Updated: 2024/05/23 01:09:21 by javiermedin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  idx;

    if (dest == src || !n)
        return (dest);
    idx = 0;
    if (dest < src)
    {
        while (idx < n)
        {
            *((char *)dest + idx) = *((char *)src +idx);
            idx++;
        }
    }
    else
    {
        while (n > 0)
        {
            *((char *)dest + n - 1) = *((char *)src + n - 1);
            n--;
        }
    }
    return (dest);
}