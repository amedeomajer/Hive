/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amajer <amajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:17:20 by amajer            #+#    #+#             */
/*   Updated: 2021/11/19 17:06:45 by amajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while(len > 0)
	{
		dst[i] = (char)src[i];
		if (src[i] == '\0')
		{
			while (dst[i] != 0)
			{
				dst[i] = '\0';
				i++;
			}
		}
		len--;
		i++;
	}
	return (dst);
}
