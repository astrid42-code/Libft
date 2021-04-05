/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 17:29:51 by asgaulti          #+#    #+#             */
/*   Updated: 2020/11/23 17:45:05 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*copydst;
	const char	*copysrc;

	i = 0;
	copydst = (char *)dst;
	copysrc = (const char *)src;
	if ((copydst == NULL) && (copysrc == NULL))
		return (NULL);
	while (i < n)
	{
		*(copydst + i) = *(copysrc + i);
		i++;
	}
	return (dst);
}
