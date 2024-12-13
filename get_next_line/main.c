/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmedin <javmedin@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:42:01 by javmedin          #+#    #+#             */
/*   Updated: 2024/12/13 23:27:32 by javmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line_bonus.h"

int main(int argc, char *argv[])
{
	char	*line;
	int		i;
	int		fd;
	int		j;

	if (argc < 2)
	{
		printf("Ha olvidado el fichero.\n");
        return (1);
	}
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		printf("Archivo: %s\n", argv[i]);
		j = 0;
		line = get_next_line(fd);
		while (line != NULL)
		{
			j++;
			printf("line [%02d]: %s", j, line);
			free(line);
			line = get_next_line(fd);
		}
		i++;
		close(fd);
	}
	return (0);
}
