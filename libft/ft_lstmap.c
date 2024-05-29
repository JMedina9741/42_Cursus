/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javiermedina <javiermedina@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:07:55 by javiermedin       #+#    #+#             */
/*   Updated: 2024/05/22 17:12:54 by javiermedin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new_lst;
    t_list  *position_new;
    t_list  *position_old;

    if (!lst || !(new_lst = ft_lstnew((*f)(lst->content))))
        return (NULL);
    position_new = new_lst;
    position_old = lst->next;
    while (position_old)
    {
        if (!(position_new->next = ft_lstnew((*f)(position_old->content))))
        {
            ft_lstclear(&new_lst, del);
            return (NULL);
        }
        position_new = position_new->next;
        position_old = position_old->next;
    }
    return (new_lst);
}