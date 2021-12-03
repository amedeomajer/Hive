/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rmvwhitespace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amajer <amajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:08:09 by amajer            #+#    #+#             */
/*   Updated: 2021/12/03 13:32:41 by amajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	measure(char const *s)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (((char *)s)[i] != '\0')
	{
		if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
			len++;
		i++;
	}
	return (len);
}

char	*ft_strtri(char const *s)
{
	int		len;
	int		i;
	char	*copy;
	int		j;

	j = 0;
	i = 0;
	len = 0;
	len = measure(s);
	copy = (char *)malloc(sizeof(char) * len + 1);
	if (!copy)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
		else
		{
			copy[j] = s[i];
			i++;
			j++;
		}
	}
	copy[j] = '\0';
	return (copy);
}
