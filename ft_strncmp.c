/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:44:33 by obajja            #+#    #+#             */
/*   Updated: 2024/11/14 18:44:34 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *str1, char *str2, int n)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i] && i < n && str1[i] && str2[i])
	{
		i++;
	}
	return (str1[i] - str2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int main (void)
{
  char* s1 = "T";
  char* s2 = "T";
  int n = 465;

  printf("%d",ft_strncmp(s1,s2,n));
  printf("\n%d",strncmp(s1,s2,n));
  return (0);
}*/
