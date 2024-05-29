/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javiermedina <javiermedina@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:32:43 by javiermedin       #+#    #+#             */
/*   Updated: 2024/05/22 17:36:38 by javiermedin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  idx;

    if (dest == src || !n)
        return (dest);
    idx = 0;
    while (idx < n)
    {
        *((char *)dest + idx) = *((char *)src + idx);
        idx++;
    }
    return (dest);
}