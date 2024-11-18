/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:44:07 by obajja            #+#    #+#             */
/*   Updated: 2024/11/14 18:44:09 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str);

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	r;

	i = ft_strlen(dst);
	j = 0;
	r = ft_strlen(src);
	if (size <= i)
		return (size + r);
	r += i;
	while (i + j + 1 < size && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (r);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	s1[50] = "Dino";
	char	s2[16] = "Nyoom";
	char	s3[50] = "Dino";
	char	s4[16] = "Nyoom";

	printf("%ld", ft_strlcat(s1, s2, 6));
	printf("\n%ld", strlcat(s3, s4, 6));
  printf("\n");
	return (0);
}*/