/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javiermedina <javiermedina@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 00:18:29 by javiermedin       #+#    #+#             */
/*   Updated: 2024/05/23 00:22:20 by javiermedin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  idx;

    if (n == 0)
        return (0);
    idx = 0;
    while (idx < n)
    {
        if (s1[idx] == s2[idx])
        {
            while (s1[idx] && s1[idx] == s2[idx])
                idx++;
        }
        else
            return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
    }
    return (0);
}