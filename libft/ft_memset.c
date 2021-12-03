/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amajer <amajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:35:11 by amajer            #+#    #+#             */
/*   Updated: 2021/12/03 13:35:47 by amajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	myChar;
	unsigned char	*temp;
	size_t			i;

	i = 0;
	myChar = (unsigned char)c;
	temp = b;
	while (i < len)
	{
		temp[i] = myChar;
		i++;
	}
	return (b);
}
