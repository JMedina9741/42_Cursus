/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmedin <javmedin@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:43:49 by javmedin          #+#    #+#             */
/*   Updated: 2024/10/22 15:47:08 by javmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>

char				*get_next_line(int fd);
char				*ft_read_to_left(int fd, char *content);

char				*ft_get_line(char *content);
char				*new_content(char *content);

unsigned long int	ft_strlen(char *str);
char				*ft_strchr(char *str, int c);
char				*ft_strjoin(char *content, char *buffer);

#endif