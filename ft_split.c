/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 18:10:56 by asgaulti          #+#    #+#             */
/*   Updated: 2020/11/30 18:01:16 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	int count_word;
	int i;

	count_word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count_word++;
		i++;
	}
	return (count_word);
}

static size_t	ltab(char const *s, int i, char c)
{
	size_t len;

	len = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (len);
		len++;
		i++;
	}
	return (len);
}

char			**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = -1;
	j = 0;
	k = 0;
	if (!(tab = malloc(sizeof(char*) * (ft_countword(s, c) + 1))))
		return (NULL);
	while (s[++i])
	{
		if (s[i] != c)
		{
			if (k == 0)
				if (!(tab[j] = malloc(sizeof(char) * (ltab(s, i, c) + 1))))
					return (NULL);
			tab[j][k] = s[i];
			tab[j][++k] = '\0';
		}
		if ((s[i] != c && (s[i + 1] == c || !s[i + 1]) && k > 0) && !(k = 0))
			j++;
	}
	tab[j] = NULL;
	return (tab);
}
