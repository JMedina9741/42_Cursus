/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javiermedina <javiermedina@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:24:00 by javiermedin       #+#    #+#             */
/*   Updated: 2024/05/22 17:25:51 by javiermedin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  idx;

    idx = 0;
    while (idx < n)
    {
        if (*((unsigned char *)s + idx) == (unsigned char)c)
            return ((void *)s + idx);
        idx++;
    }
    return (NULL);
}