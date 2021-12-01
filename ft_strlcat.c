/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amajer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:09:46 by amajer            #+#    #+#             */
/*   Updated: 2021/11/30 18:15:51 by amajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	if (dstsize > 0)
	{
		while (dstsize > 1)
		{
			dst[i] = ((char *)src)[j];
			i++;
			j++;
			dstsize--;
		}
	}
	dst[i] = '\0';
	return (j);
}

/*
Description
The strlcat() function concatenates strings. It is designed to be safer, more consistent, and less error prone than strncat.
Strlcat() take the full size of the buffer (not just the length) and guarantee to NUL-terminate the result (as long as size is 
larger than 0 or, as long as there is at least one byte free in dst).
Note that a byte for the NUL should be included in size. 
Also note that strlcat() only operates on true ''C'' strings. 
This means that for strlcat() both src and dst must be NUL-terminated.
The strlcat() function appends the NUL-terminated string src to the end of dst. 
It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.

Return Values
The strlcat() function returns the total length of the string it tried to create. For strlcat() that means the initial length of dst plus the length of src. While this may seem somewhat confusing, it was done to make truncation detection simple.
Note, however, that if strlcat() traverses size characters without finding a NUL, the length of the string is considered to be size and the destination string will not be NUL-terminated (since there was no space for the NUL). This keeps strlcat() from running off the end of a string. In practice this should not happen (as it means that either size is incorrect or that dst is not a proper ''C'' string). The check exists to prevent potential security problems in incorrect code.
 
*/
