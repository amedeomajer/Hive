/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amajer <amajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:15:20 by amajer            #+#    #+#             */
/*   Updated: 2021/12/03 13:37:19 by amajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	int				i;

	i = 0;
	p = NULL;
	while ((int)n > 0)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			p = (unsigned char *)&s[i];
			return (p);
		}
		n--;
		i++;
	}
	return (p);
}
