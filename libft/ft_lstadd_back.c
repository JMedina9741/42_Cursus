/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javiermedina <javiermedina@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:45:16 by javiermedin       #+#    #+#             */
/*   Updated: 2024/05/22 16:57:56 by javiermedin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *position;

    if (!lst || !new)
        return ;
    if (*lst == NULL)
        *lst = new;
    else
    {
        position = ft_lstlast(*lst);
        position->next = new;
    }
}