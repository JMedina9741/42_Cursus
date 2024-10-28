/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmedin <javmedin@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 21:19:58 by javmedin          #+#    #+#             */
/*   Updated: 2024/10/28 19:58:18 by javmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

int				ft_putchar(int c);
int				ft_putnbr(int n);
int				ft_putstr(char *s);
int				ft_printf(const	char *str, ...);
unsigned int	ft_uns_num(unsigned int num);
int				ft_point_hexa(void *p);
size_t			ft_strlen(const	char *s);
int				ft_hexa_mincap(int n);
int				ft_hexa_cap(int n);

#endif