/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:31:45 by obajja            #+#    #+#             */
/*   Updated: 2024/11/14 19:04:22 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*src;
	size_t		i;

	i = 0;
	src = malloc(elementCount * elementSize);
	if (!src)
		return (NULL);
	while (i < elementCount * elementSize)
	{
		((char *)src)[i] = 0;
		i++;
	}
	return (src);
}
/*
#include <stdio.h>
int	main(void)
{
	unsigned int f = 1;
	unsigned int l = 1;
	int i = 0;
	char *s1;
	char *s2;

	s1 = (char *)ft_calloc(f, l);
	s2 = (char *)calloc(f, l);

	while (i < f * l)
	{
		printf("%d", s1[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < f * l)
	{
		printf("%d", s2[i]);
		i++;
	}
  printf("\n");
	return (0);
}*/