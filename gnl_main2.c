/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_main2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:06:50 by pbureera          #+#    #+#             */
/*   Updated: 2022/10/14 13:06:51 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main(int ac, char **argv)
{
	int fd[2];
	char *line;
	(void)ac;
	int	i;

	fd[0] = open(argv[1], O_RDONLY);
	fd[1] = open(argv[2], O_RDONLY);
	i = 0;

	line = get_next_line(fd[i]);
	while (line && (i == 0 || i == 1))
	{
		if (i == 0)
			i = 1;
		else
			i = 0;
		printf("%s", line);
		free(line);
		line = get_next_line(fd[i]);
	}
	return (0);
}
