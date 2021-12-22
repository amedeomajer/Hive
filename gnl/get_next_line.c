/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amajer <amajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:57:05 by amajer            #+#    #+#             */
/*   Updated: 2021/12/22 14:14:09 by amajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

#define BUFF_SIZE 300

int get_next_line(const int fd, char **line)
{
	static char	*str;
	char	*trimmed_str;
	int	ret;
	char	*new_line;
	int	len;

	new_line = 0;
	ret = 1;
	len = 0;
	str = (char *)malloc(sizeof(char) * BUFF_SIZE);
	while (ret != 0)
	{
		ret = read(fd, str, BUFF_SIZE);
		//printf("|read has returned: %i|\n", ret);
		//printf("buff contains: %s\n", str);
		new_line = ft_memchr((void *)str, (int)('\n'), ret);
		if (new_line)
		{
			len = new_line - str;
			//printf("|len ammounts to: %i|\n", len);
			trimmed_str = (char *)malloc(sizeof(char) * len);
			ft_memcpy((void *)trimmed_str, (const void *)str, len);
			trimmed_str[len] = '\0';
			//printf("|trimmed string contains: %s\n|", trimmed_str);
			line = &trimmed_str;
			//printf("line now contains: %s\n", line[0]);
			return (1);
		}

	}
	return (0);
}

int	main()
{
	int	fd;
	char *line;

	line = (char *)malloc(sizeof(char) * 4090);
	fd = open("test_simple.txt", O_RDONLY);
	if (!fd)
		//printf("open failed");
	while (get_next_line(fd, &line))
		;
	//printf("|%s|\n", line);
	return (0);
}

/*
int get_next_line(const int fd, char **line);
fd -> file descriptore we'll read from
line -> address of a pointer to a character that will be used
		to save the line read from the file descriptor.
int	read(int fd, char *buf, int count);
*/