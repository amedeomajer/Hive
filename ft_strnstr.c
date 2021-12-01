/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amajer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:07:55 by amajer            #+#    #+#             */
/*   Updated: 2021/11/25 15:26:58 by amajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*p_to_n;

	i = 0;
	if (!needle)
	{
		return ((char *)haystack);
	}
	while (haystack[i] != 0 && i < len)
	{
		if (haystack[i] == needle[0])
		{
			if (ft_strncmp(&haystack[i], needle, len - i) == 0)
			{
				p_to_n = (char *)&haystack[i];
				return (p_to_n);
			}
		}
		i++;
	}
	return (NULL);
}

/*RETURN VALUES
     If needle is an empty string, haystack is returned;
	 if needle occurs nowhere in haystack, NULL is returned;
	 otherwise a pointer to the first character of the first
     occurrence of needle is returned.*/
