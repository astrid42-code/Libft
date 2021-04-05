/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 17:36:34 by asgaulti          #+#    #+#             */
/*   Updated: 2020/11/23 11:15:40 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *copy_s;

	copy_s = s;
	while (n > 0)
	{
		*copy_s++ = '\0';
		n--;
	}
}
