/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amajer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:44:59 by amajer            #+#    #+#             */
/*   Updated: 2021/11/30 19:53:59 by amajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_populate(const char *s, char **str, char c)
{
  int i;
  int a;
  int j;
  
  j = 0;
  i = 0;
  a = 0;
  while (s[i] != 0)
  {
    while (s[i] == c)
      i++;
    while (s[i] != c && s[i] != 0)
    {
      str[a][j] = ((char *)s)[i];
      j++;
      i++;
    }
    a++;
    j = 0;
  }
  return (str);
}

int    ft_measure(const char *s, char c)
{
    int    count;
    int    i;

    count = 0;
    i = 0;
    while (s[i] !=  0)
    {
        while (s[i] == c)
            i++;
        while (s[i] != c && s[i] != 0)
            i++;
        count++;
    }
    return (count);
}

char    **ft_strsplit(char const *s, char c)
{
    int    i;
    char    **str = NULL;

    i = 0;
    str = (char **)malloc(sizeof(char *) * (ft_measure(s, c) + 1));
    if (!str)
        return (NULL);
    while (i < ft_measure(s, c))
    {
        str[i] = (char *)malloc(sizeof(char) * (strlen(s) + 1));
        if (!str[i])
           return (NULL);
        i++;
    }
    str[i] = NULL;
    return (ft_populate(s, str, c));
}
