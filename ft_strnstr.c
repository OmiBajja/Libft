/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:44:39 by obajja            #+#    #+#             */
/*   Updated: 2024/11/14 18:44:40 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *tofind, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (tofind[j] == '\0')
		return (str);
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i + j] == tofind[j] && (i + j) < n)
		{
			j++;
			if (tofind[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main ()
{
  char* s1 = "I love dinosaurs";
  char* s2 = "in";
  
  printf("1 %s",ft_strnstr(s1, s2,3));
  return (0);
}*/
