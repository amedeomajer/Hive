/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amajer <amajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:31:06 by amajer            #+#    #+#             */
/*   Updated: 2021/12/03 13:25:38 by amajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	if (s1 && s2)
	{
		while (i < n)
		{
			if (s1[i] == 0 && s2[i] == 0)
				return (1);
			if (s1[i] != s2[i])
				return (0);
			i++;
		}
	}
	return (1);
}
