/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javiermedina <javiermedina@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:16:33 by javiermedin       #+#    #+#             */
/*   Updated: 2024/05/22 17:17:48 by javiermedin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int     idx;
    t_list  *position;

    idx = 0;
    position = lst;
    while (position != NULL)
    {
        position = position->next;
        idx++;
    }
    return (idx);
}