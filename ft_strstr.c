/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amajer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:54:31 by amajer            #+#    #+#             */
/*   Updated: 2021/11/26 10:56:09 by amajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	z;
	int	i;
	int	y;

	i = 0;

	if (ft_strlen(haystack) == 0 && ft_strlen(needle) == 0)
		return (NULL);
	if (!needle)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		y = 0;
		z = i;
		while (haystack[i + y] == needle[y])
		{
			if (needle [y + 1] == '\0')
				return (&((char *)haystack)[z]);
			y++;
		}
		i++;
	}
	return (NULL);
}

/*
Test code:
	char *s1 = "";
	char *s2 = "";
	char *i1 = strstr(s1, s2);
	char *i2 = ft_strstr(s1, s2);

	if (i1 == i2)
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);

Diffs:
      strstr: ||
   ft_strstr: |(null)|

[fail]: your strstr does not work with empty strings
Test code:
	char *s1 = "oh no not the empty string !";
	char *s2 = "";
	char *i1 = strstr(s1, s2);
	char *i2 = ft_strstr(s1, s2);

	if (i1 == i2)
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);

Diffs:
      strstr: |oh no not the empty string !|
   ft_strstr: |(null)|

[no crash]: your strstr does not segfault when null parameter is sent
Test code:
	ft_strstr("fake", ((void *)0));


[no crash]: your strstr does not segfault when null parameter is sent
Test code:
	ft_strstr(((void *)0), "fake"); 
 */
