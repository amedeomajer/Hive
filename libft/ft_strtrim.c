/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amajer <amajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:57:46 by amajer            #+#    #+#             */
/*   Updated: 2021/12/03 13:11:45 by amajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	calculate_len(char const *s)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[len] != 0)
		len++;
	len--;
	while (s[len] == ' ' || s[len] == '\t' || s[len] == '\n')
		len--;
	len -= i;
	return (len);
}

char	*ft_strtrim(char const *s)
{
	int		j;
	int		i;
	int		len;
	char	*copy;

	i = 0;
	j = 0;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
		i++;
	if (s[i] == '\0')
		return ("");
	len = calculate_len(s);
	copy = (char *)malloc(sizeof(char) * len + 2);
	if (!copy)
		return (NULL);
	while (len >= 0)
	{
		copy[j] = s[i];
		j++;
		i++;
		len--;
	}
	copy[j] = '\0';
	return (copy);
}
