/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javiermedina <javiermedina@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 00:29:56 by javiermedin       #+#    #+#             */
/*   Updated: 2024/05/23 00:32:15 by javiermedin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtf.h"

char    *ft_strrchr(const char *str, int c)
{
    int idx;

    idx = ft_strlen((char *)str) + 1;
    while (idx--)
    {
        if (*(str + idx) == c)
            return ((char *)(str + idx));
    }
    return (0);
}