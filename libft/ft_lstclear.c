/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javiermedina <javiermedina@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:51:50 by javiermedin       #+#    #+#             */
/*   Updated: 2024/05/22 16:58:15 by javiermedin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *position;

    if (!lst)
        return ;
    while (*lst != NULL)
    {
        position = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = position;
    }
}