/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmedin <javmedin@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:44:53 by javmedin          #+#    #+#             */
/*   Updated: 2024/10/22 15:47:08 by javmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_read_to_left(int fd, char *content)
{
	char	*buffer;
	int		r_bytes;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	r_bytes = 1;
	while (!ft_strchr(content, '\n') && r_bytes != 0)
	{
		r_bytes = read(fd, buffer, BUFFER_SIZE);
		if (r_bytes == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[r_bytes] = '\0';
		content = ft_strjoin(content, buffer);
	}
	free(buffer);
	return (content);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*content[FOPEN_MAX];

	if (fd < 0 || BUFFER_SIZE <= 0 || fd >= FOPEN_MAX)
		return (0);
	content[fd] = ft_read_to_left(fd, content[fd]);
	if (!content[fd])
		return (NULL);
	line = ft_get_line(content[fd]);
	content[fd] = new_content(content[fd]);
	return (line);
}