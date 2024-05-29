/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javiermedina <javiermedina@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:21:13 by javiermedin       #+#    #+#             */
/*   Updated: 2024/05/22 18:25:45 by javiermedin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    int         idx;
    int         idx_join;
    char    *join;

    if (!s1 || !s2 || !(join = malloc(sizeof(char) * (ft_strlen((char*)s1) + 
                                ft_strlen((char *)s2) + 1))))
        return (NULL);
    idx = 0;
    idx_join = 0;
    while (s1[idx])
        join[idx_join++] = s1[idx++];
    idx = 0;
    while (s2[idx])
        join[idx_join++] = s2[idx++];
    join[idx_join] = '\0';
    return (join);
}