/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javiermedina <javiermedina@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:38:04 by javiermedin       #+#    #+#             */
/*   Updated: 2024/05/22 18:42:12 by javiermedin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    size_t  idx;
    char    *tmp;

    if (!s || !f || 
            !(tmp = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1))))
        return (NULL);
    idx = 0;
    while (idx < (ft_strlen((char *)s)))
    {
        tmp[idx] = f(idx, s[idx]);
        idx++;
    }
    tmp[idx] = '\0';
    return (tmp);
}
