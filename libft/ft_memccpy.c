/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javiermedina <javiermedina@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:19:21 by javiermedin       #+#    #+#             */
/*   Updated: 2024/05/22 17:23:26 by javiermedin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t  idx;

    idx = 0;
    while (idx < n)
    {
        *((unsigned char *)dest + idx) = *((unsigned char *)src + idx);
        if (*((unsigned char *)src + idx) == (unsigned char)c)
        {
            return (dest + idx + 1);
            break ;
        }
        idx++;
    }
    return (NULL);
}