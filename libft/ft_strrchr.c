/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amajer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:33:13 by amajer            #+#    #+#             */
/*   Updated: 2021/11/23 11:57:33 by amajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p2c;
	unsigned int	i;
	int	found;

	i = 0;
	found = 0;
	p2c = NULL;
	while (s[i] != 0)
	{
		if (s[i] == (char)c)
			p2c = (char *)&s[i];
		i++;
	}
	if (s[i] == (char)c)
		p2c = (char *)&s[i];
	if (p2c)
		return (p2c);
	return (NULL);
}
