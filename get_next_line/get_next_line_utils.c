/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmedin <javmedin@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:43:26 by javmedin          #+#    #+#             */
/*   Updated: 2024/12/13 23:38:43 by javmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	if (c == '\0')
		return ((char *)&str[ft_strlen(str)]);
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char *content, char *buffer)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!content)
	{
		content = (char *)malloc(1 * sizeof(char));
		content[0] = '\0';
	}
	if (!content || !buffer)
		return (NULL);
	str = malloc((ft_strlen(content) + ft_strlen(buffer) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = -1;
	if (content)
		while (content[++i])
			str[i] = content[i];
	j = 0;
	while (buffer[j])
		str[i++] = buffer[j++];
	str[ft_strlen(content) + ft_strlen(buffer)] = '\0';
	free(content);
	return (str);
}

char	*ft_get_line(char *content)
{
	int		i;
	char	*str;

	i = 0;
	if (!content[i])
		return (NULL);
	while (content[i] && content[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (content[i] && content[i] != '\n')
	{
		str[i] = content[i];
		i++;
	}
	if (content[i] == '\n')
	{
		str[i] = content[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*new_content(char *content)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (content[i] && content[i] != '\n')
		i++;
	if (!content[i])
	{
		free(content);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(content) - i + 1));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (content[i])
		str[j++] = content[i++];
	str[j] = '\0';
	free(content);
	return (str);
}