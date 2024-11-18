/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:43:20 by obajja            #+#    #+#             */
/*   Updated: 2024/11/14 18:43:23 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char const *s);

static int	ft_countwords(char const *s, char c)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			j += 1;
		i++;
	}
	return (j);
}

static char	*ft_wordprinter(char const *s, char c)
{
	int		i;
	char	*tab;

	i = 0;
	while (s[i + 1] != c && s[i + 1])
		i++;
	tab = malloc((i + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	while (i >= 0 && s[i])
	{
		tab[i] = s[i];
		i--;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		f;

	i = 0;
	j = 0;
	f = ft_strlen(s);
	tab = malloc((f + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	f = ft_countwords(s, c);
	while (j <= f)
	{
		while (s[i] == c && s[i])
			i++;
		tab[j] = ft_wordprinter(&s[i], c);
		j++;
		while (s[i] != c && s[i])
			i++;
	}
	tab[j] = NULL;
	return(tab);
}
/*
int	main(void)
{
	char	str[50]= "    Asdsa123 2 dsad   D A DA a  , ";
	char	sep= ' ';
	ft_split(str, sep);
	return (0);
}
	j = 0;
	while (tab[j])
	{
		printf("\n%s", tab[j]);
		j++;
	}
	return (tab);
*/