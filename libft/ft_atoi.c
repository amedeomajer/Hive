/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amajer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:35:18 by amajer            #+#    #+#             */
/*   Updated: 2021/11/19 14:14:21 by amajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_second_character(const char *str)
{
	if (str[1] == '+' || str[1] == '-')
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	pos_or_neg;

	pos_or_neg = 1;
	i = 0;
	result = 0;

	while (str[i] == '+' || str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i]  == '\r' || str[i] == '\n')
		i++;
	if (str[i] == '-')
	{
		pos_or_neg = -1;
		i++;
	}
	if (check_second_character(str) == 0)
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * pos_or_neg);
}
