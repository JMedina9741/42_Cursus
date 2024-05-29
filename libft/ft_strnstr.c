/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javiermedina <javiermedina@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 00:25:14 by javiermedin       #+#    #+#             */
/*   Updated: 2024/05/23 00:29:19 by javiermedin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *str, const char *to_find, size_t len)
{
    size_t  position;

    if (*to_find == '\0')
        return ((char *)to_find);
    position = ft_strlen((char *)to_find);
    while (*str != '\0' && len-- >= position)
    {
        if (*str == *to_find && ft_memcmp(str, to_find, position) == 0)
            return ((char *)str);
        str++;
    }
    return (NULL);
}