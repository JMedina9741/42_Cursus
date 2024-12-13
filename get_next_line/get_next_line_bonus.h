/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmedin <javmedin@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:45:36 by javmedin          #+#    #+#             */
/*   Updated: 2024/12/13 23:41:30 by javmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

char				*get_next_line(int fd);
char				*ft_read_to_left(int fd, char *content);

char				*ft_get_line(char *content);
char				*new_content(char *content);

size_t	            ft_strlen(char *str);
char				*ft_strchr(char *str, int c);
char				*ft_strjoin(char *content, char *buffer);

#endif