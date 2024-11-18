/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:45:00 by obajja            #+#    #+#             */
/*   Updated: 2024/11/14 18:45:13 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
    char ch;

    ch = 'Q';
    printf("\n%c",tolower(ch));
    printf("\n%c",ft_tolower(ch));
    return (0);
}*/