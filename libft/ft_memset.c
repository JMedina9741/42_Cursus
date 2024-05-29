/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javiermedina <javiermedina@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:41:46 by javiermedin       #+#    #+#             */
/*   Updated: 2024/05/22 17:44:23 by javiermedin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *str, int c, size_t n)
{
    size_t  idx;

    idx = 0;
    while (idx < n)
    {
        *((unsigned char *)str + idx) = c;
        idx++;
    }
    return (str);
}