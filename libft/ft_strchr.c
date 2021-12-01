/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amajer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:40:08 by amajer            #+#    #+#             */
/*   Updated: 2021/11/18 19:27:00 by amajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char	*p_to_c;

	p_to_c = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			p_to_c = (char *)&s[i];
			return (p_to_c);
		}
		i++;
	}
	if ((char)c == '\0')
	{
		p_to_c = (char *)&s[i];
		return (p_to_c);
	}
	return (p_to_c);
}
