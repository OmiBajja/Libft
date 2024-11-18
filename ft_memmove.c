/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:32:28 by obajja            #+#    #+#             */
/*   Updated: 2024/11/14 18:32:29 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned int	i;
	char			*dest_cpy;
	const char		*src_cpy;

	dest_cpy = (char *)dest;
	src_cpy = (const char *)src;
	i = 0;
	if (dest_cpy > src_cpy && dest_cpy < src_cpy + size)
	{
		i = size;
		while (i > 0)
		{
			dest_cpy[i - 1] = src_cpy[i - 1];
			i--;
		}
	}
	else
	{
		while (i < size)
		{
			dest_cpy[i] = src_cpy[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[50] = "DinosasZAEAZaurs";
	char	src2[50] = "DinosasZAEAZaurs";

	//char	dest[50];
	//char	dest2[50];

	ft_memmove(src, src + 6, 20);
	memmove(src2, src2 + 6, 20);
  printf("%s",src);    
  printf("\n%s",src2);
  printf("\n");
  return (0);
}
*/