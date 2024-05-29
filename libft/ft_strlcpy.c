/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javiermedina <javiermedina@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:32:58 by javiermedin       #+#    #+#             */
/*   Updated: 2024/05/22 18:35:57 by javiermedin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t  idx;
    size_t  count;

    idx = 0;
    count = 0;
    if (!dest || !src)
        return (0);
    while (src[count])
        count++;
    while (src[idx] && idx + 1 < size)
    {
        dest[idx] = src[idx];
        idx++;
    }
    if (size)
        dest[idx] = '\0';
    return (count);
}