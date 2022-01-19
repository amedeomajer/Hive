/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amajer <amajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:35:19 by amajer            #+#    #+#             */
/*   Updated: 2022/01/19 14:39:28 by amajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("test_simple.txt", O_RDONLY);
	if (fd < 0)
		printf("\nopen failed\n");
	while (get_next_line(fd, &line))
	{
		printf("|%s|\n", line);
		ft_strdel(&line);
	}
	system("leaks a.out");
	return (0);
}
