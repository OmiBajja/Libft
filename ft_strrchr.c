/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:44:43 by obajja            #+#    #+#             */
/*   Updated: 2024/11/14 18:44:44 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str);

char	*ft_strrchr(const char *str, int tofind)
{
	int	i;

	i = (ft_strlen((char *)str) - 1);
	while (str[i])
	{
		if (str[i] == tofind)
			return ((char *)&str[i]);
		i--;
	}
	if (tofind == '\0')
		return ((char *)&str[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main ()
{
  char* s1 = "I love dsinosaur";
  char s2 = '\0';
  
  printf("1%s",ft_strrchr(s1, s2));
  printf("\n2%s",strrchr(s1,s2));
  return (0);
}*/
