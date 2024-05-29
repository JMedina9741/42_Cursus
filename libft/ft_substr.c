/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javiermedina <javiermedina@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 00:39:16 by javiermedin       #+#    #+#             */
/*   Updated: 2024/05/23 00:43:09 by javiermedin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int    idx;
    char    *modified_s;

    if (!s || !(modified_s = malloc(sizeof(char) * (len + 1))))
        return (NULL);
    idx = 0;
    while (start < ft_strlen((char *)s) && s[start + idx] && idx < len)
    {
        modified_s[idx] = s[start + idx];
        idx++;
    }
    modified_s[idx] = '\0';
    return (modified_s);
}