/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amajer <amajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:57:05 by amajer            #+#    #+#             */
/*   Updated: 2021/12/21 21:17:24 by amajer           ###   ########.fr       */
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
	unsigned char	new_line;
	int	len;

	len = 0;
	str = (char *)malloc(sizeof(char) * BUFF_SIZE);
	while (ret != 0)
	{
		ret = read(fd, str, BUFF_SIZE);
		new_line = ft_memchr((void *)str, (int)('\n'), BUFF_SIZE);
		if (new_line)
		{
			len = new_line - str;
			str[len + 1] = 0;
			trimmed_str = (char *)malloc(sizeof(char) * len + 1);
			ft_memcpy((void *)trimmed_str, (const void *)str, len + 1);
			line = trimmed_str;
			return (1);
		}
		else if (!new_line)
		{
			len = len + ret;
			str[len + 1] = 0;
			trimmed_str = (char *)malloc(sizeof(char) * len + 1);
			ft_memcpy((void *)trimmed_str, (const void *)str, len + 1);
		}
	}
}

int	main()
{
	int	fd;

	fd = open("test_simple.txt", O_RDONLY);
	if (!fd)
		printf("open failed");
	get_next_line(fd);
	return (0);
}

/*
int get_next_line(const int fd, char **line);
fd -> file descriptore we'll read from
line -> address of a pointer to a character that will be used
		to save the line read from the file descriptor.
int	read(int fd, char *buf, int count);
*/