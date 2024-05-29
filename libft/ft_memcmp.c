/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javiermedina <javiermedina@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:27:42 by javiermedin       #+#    #+#             */
/*   Updated: 2024/05/22 17:31:22 by javiermedin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  idx;

    idx = 0;
    while (idx < n)
    {
        if (*((unsigned char *)s1 + idx) == *((unsigned char *)s2 + idx))
            idx++;
        else
            return ((*((unsigned char *)s1 + idx)) - 
                        *((unsigned char *)s2 + idx));
    }
    return (0);
}