/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:43:30 by obajja            #+#    #+#             */
/*   Updated: 2024/11/14 18:43:33 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int tofind)
{
	int	i;

	i = 0;
	if (tofind == '\0')
		return ((char *)&str[i]);
	while (str[i])
	{
		if (str[i] == (char)tofind)
			return ((char *)&str[i]);
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
  char s2 = 'e';
  
  printf("1: %s",ft_strchr(s1, s2));
  printf("\n2: %s",strchr(s1,s2));
  printf("\n");
  return (0);
}
*/