/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javiermedina <javiermedina@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:26:54 by javiermedin       #+#    #+#             */
/*   Updated: 2024/05/22 18:32:07 by javiermedin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  idx;
    size_t  src_idx;
    size_t  value;

    if (size == 0)
        return (ft_strlen(src));
    else if (size < ft_strlen(dest))
        value = ft_strlen(src) + ft_strlen(dest);
    idx = 0;
    while (dest[idx] != '\0')
        idx++;
    src_idx = 0;
    while (src[src_idx] != '\0' && idx + 1 < size)
    {
        dest[idx] = src[src_idx];
        src_idx++;
        idx++;
    }
    dest[idx] = '\0';
    return (value);
}