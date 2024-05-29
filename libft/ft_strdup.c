/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javiermedina <javiermedina@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:17:05 by javiermedin       #+#    #+#             */
/*   Updated: 2024/05/22 18:20:15 by javiermedin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *str)
{
    int         idx;
    char    *dest;

    if (!(dest = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
        return (NULL);
    idx = 0;
    while (str[idx])
    {
        dest[idx] = str[idx];
        idx++;
    }
    dest[idx] = '\0';
    return (dest);
}