/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amajer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:40:51 by amajer            #+#    #+#             */
/*   Updated: 2021/11/25 15:18:12 by amajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len,

	j = 0;
	i = 0;
	src_len = ft_strlen(src);

	if (dstsize <= src_len)
		return (src_len);
	while (dstsize > (i + 1) && src[j] != 0)
	{
		dst[i++] = ((char *)src)[j++];
		dstsize--;
	}
	dst[i] = '\0';
	return (src_len);
}
