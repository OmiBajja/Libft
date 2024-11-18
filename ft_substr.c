/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:44:54 by obajja            #+#    #+#             */
/*   Updated: 2024/11/14 18:44:55 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char	*str;

	i = 0;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (s[start] == '\0')
		return (str);
	while (i < len && s[start])
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char	s[60] = "I LOVE DINOSAURS NYOOOM";
	printf("%s", ft_substr(s, 17, 2));
  printf("\n");
	return (0);
}*/