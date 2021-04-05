/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 18:23:43 by asgaulti          #+#    #+#             */
/*   Updated: 2020/11/29 18:07:23 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*copy_s;

	i = 0;
	j = 0;
	if (!(copy_s = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
			copy_s[j++] = s[i];
		i++;
	}
	copy_s[j] = '\0';
	return (copy_s);
}
