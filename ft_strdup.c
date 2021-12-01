/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amajer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:39:11 by amajer            #+#    #+#             */
/*   Updated: 2021/11/16 16:30:57 by amajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dup;

	i = 0;
	while (s1[i] != 0)
		i++;
	dup = (char *)malloc(sizeof(char) * (i + 1));
	if (!(dup))
		return (0);
	i = 0;
	while (s1[i] != 0)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
