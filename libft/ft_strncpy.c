/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amajer <amajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:17:20 by amajer            #+#    #+#             */
/*   Updated: 2021/12/03 13:26:02 by amajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while ((int)len > 0)
	{
		dst[i] = (char)src[i];
		if (src[i] == '\0')
		{
			while ((int)len > 0)
			{
				dst[i] = '\0';
				i++;
				len--;
			}
		}
		len--;
		i++;
	}
	return (dst);
}
