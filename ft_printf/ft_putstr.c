/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmedin <javmedin@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 21:27:16 by javmedin          #+#    #+#             */
/*   Updated: 2024/11/04 00:45:22 by javmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd, int *count)
{
	int	i;

	i = 0;
	if (s == 0)
	{
		ft_putstr_fd("(null)", fd, count);
	}
	else
	{
		while (s[i])
		{
			ft_putchar_fd(s[i], fd, count);
			i++;
		}
	}
	return (*count);
}