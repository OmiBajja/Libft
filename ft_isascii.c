/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:32:02 by obajja            #+#    #+#             */
/*   Updated: 2024/11/14 18:32:03 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] > 127)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
    char *s = "Din#.<>}{&*$sa0urs";

    printf("%d",ft_isascii(s));
    return(0);
}*/