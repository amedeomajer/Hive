/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amajer <amajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:40:51 by amajer            #+#    #+#             */
/*   Updated: 2021/12/03 13:27:39 by amajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (dstsize <= ft_strlen(src))
		return (ft_strlen(src));
	while (dstsize > (i + 1) && src[j] != 0)
	{
		dst[i] = ((char *)src)[j];
		i++;
		j++;
		dstsize--;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
