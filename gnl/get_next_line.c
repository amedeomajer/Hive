/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amajer <amajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:57:05 by amajer            #+#    #+#             */
/*   Updated: 2022/01/18 19:37:49 by amajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

#define BUFF_SIZE 10000000
#define FD_MAX 10240

static int	ft_str_movedel(char **src, char **dst)
{
	if (*src)
	{
		*dst = ft_strdup(*src);
		ft_strdel(&*src);
		if (*dst)
			return (1);
	}
	return (-1);
}

static char	*ft_copy_to_line(char *str)
{
	int		i;
	char	*str_to_new_line;

	i = 0;
	while (str[i] != '\n' && str[i] != 0)
		i++;
	str_to_new_line = ft_strnew(i + 1);
	if (!str_to_new_line)
		return (NULL);
	ft_strncpy(str_to_new_line, str, i);
	str_to_new_line[i] = '\0';
	return (str_to_new_line);
}

static int	ft_isthere(char *str, char c)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != 0)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_read_function(char **prev, int fd, char **temp)
{
	int		ret;
	char	*buff;

	ret = 1;
	buff = (char *)malloc(sizeof(char) * BUFF_SIZE + 1);
	while (ret > 0 && (ft_isthere(prev[fd], '\n') != 1))
	{
		ret = read(fd, buff, BUFF_SIZE);
		if (ret < 0)
			return (-1);
		buff[ret] = 0;
		if (!prev[fd])
			prev[fd] = ft_strdup(buff);
		else
		{
			*temp = ft_strjoin(prev[fd], buff);
			ft_strdel(&prev[fd]);
			if (ft_str_movedel(*&temp, &prev[fd]) == -1)
				return (-1);
		}
	}
	ft_strdel(&buff);
	return (0);
}

int	get_next_line(const int fd, char **line)
{
	static char		*previous[FD_MAX + 1];
	char			*temp;

	if (fd < 0 || fd > FD_MAX || !line)
		return (-1);
	if (ft_isthere(previous[fd], '\n') == 0)
		if (ft_read_function((char **)&previous, fd, &temp) == -1)
			return (-1);
	if (previous[fd][0] != '\0')
	{
		*line = ft_copy_to_line(previous[fd]);
		if (*line == NULL || ft_str_movedel(&previous[fd], &temp) == -1)
			return (-1);
		if (ft_isthere(temp, '\n'))
			previous[fd] = ft_strdup(ft_strchr(temp, '\n') + 1);
		ft_strdel(&temp);
		return (1);
	}
	ft_strdel(&previous[fd]);
	return (0);
}

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
