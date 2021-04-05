/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 17:00:57 by asgaulti          #+#    #+#             */
/*   Updated: 2020/11/23 16:38:49 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long nb)
{
	int i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int		len;
	long	nb;
	char	*tab;

	nb = n;
	len = ft_len(n);
	if (!(tab = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	tab[len--] = '\0';
	if (nb == 0)
		tab[0] = 48;
	if (nb < 0)
	{
		tab[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		tab[len] = (nb % 10) + 48;
		nb /= 10;
		len--;
	}
	return (tab);
}
