/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_main_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:32:54 by pbureera          #+#    #+#             */
/*   Updated: 2022/07/16 12:08:13 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd1;
	int		fd2;
	char	*line;

	fd1 = open("tests/1.txt", O_RDONLY);
	fd2 = open("tests/3.txt", O_RDONLY);
	printf("%d\n", fd1);
	printf("%d\n", fd2);
	line = get_next_line(fd1);
	printf("%s\n", line);
	free(line);
	line = get_next_line(fd2);
	printf("%s\n", line);
	free(line);
	line = get_next_line(fd1);
	printf("%s\n", line);
	free(line);
	line = get_next_line(fd2);
	printf("%s\n", line);
	free(line);
	return (0);
}
