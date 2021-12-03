/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amajer <amajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:09:46 by amajer            #+#    #+#             */
/*   Updated: 2021/12/03 13:28:13 by amajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dstsize < ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	while (dst[i] != '\0')
	{
		i++;
		dstsize--;
	}
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
	return (ft_strlen(src) + ft_strlen(dst) - 3);
}
