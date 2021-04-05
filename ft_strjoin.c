/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 18:13:38 by asgaulti          #+#    #+#             */
/*   Updated: 2020/11/23 18:07:36 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		size_s1;
	int		size_s2;
	char	*copy_s;

	i = 0;
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	if (!(copy_s = (char *)malloc(sizeof(char *) * (size_s1 + size_s2 + 1))))
		return (NULL);
	while (s1[i])
	{
		copy_s[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		copy_s[i] = s2[j];
		i++;
		j++;
	}
	copy_s[i] = '\0';
	return (copy_s);
}
