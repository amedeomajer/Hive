/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amajer <amajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:08:28 by amajer            #+#    #+#             */
/*   Updated: 2021/12/03 13:40:01 by amajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_populate_str(char *str, int len, int n)
{
	int	sign;

	if (n < 0)
		sign = 1;
	if (sign)
	{
		str[0] = '-';
		n = n * -1;
	}
	str[--len] = '\0';
	while (n > 9)
	{
		str[--len] = (n % 10) + 48;
		n = n / 10;
	}
	str[--len] = (n % 10) + 48;
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_nlen(n);
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	return (ft_populate_str(str, len, n));
}
