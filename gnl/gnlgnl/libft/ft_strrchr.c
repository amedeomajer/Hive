/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amajer <amajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:33:13 by amajer            #+#    #+#             */
/*   Updated: 2022/01/20 14:08:16 by amajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*p2c;
	unsigned int	i;

	i = 0;
	p2c = NULL;
	if (s == NULL)
		return (NULL);
	while (s[i] != 0)
	{
		if (s[i] == (char)c)
			p2c = (char *)&s[i];
		i++;
	}
	if (s[i] == (char)c)
		p2c = (char *)&s[i];
	return (p2c);
}
