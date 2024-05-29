/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javiermedina <javiermedina@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:57:40 by javiermedin       #+#    #+#             */
/*   Updated: 2024/05/23 01:14:28 by javiermedin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    int idx;

    if (!s)
        return ;
    idx = 0;
    while (s[idx])
    {
        ft_putchar_fd(s[idx], fd);
        idx++;
    }
}