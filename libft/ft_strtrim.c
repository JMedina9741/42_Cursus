/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javiermedina <javiermedina@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 00:34:51 by javiermedin       #+#    #+#             */
/*   Updated: 2024/05/23 00:37:56 by javiermedin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  size_s1;

    if (!s1 || !set)
        return (NULL);
    while (ft_strchr(set, *s1) && *s1 != '\0')
        s1++;
    size_s1 = ft_strlen((char*)s1);
    while (ft_strchr(set, s1[size_s1]) && size_s1 != 0)
        size_s1--;
    return (ft_substr((char *)s1, 0, size_s1 + 1));
}