/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:29:14 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/19 12:32:40 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_nbrlen(long int n)
{
	if (n < 0)
	{
		if (n == -2147483648)
			return (11);
		n *= -1;
		return (ft_nbrlen(n) + 1);
	}
	if (n < 10)
		return (1);
	return (ft_nbrlen(n / 10) + 1);
}

char	*ft_itoa(int n)
{
	char	*nbr_as_str;
	int		len;
	int		i;
	int		negative;
	long int	nb;

	nb = n;

	negative = 0;
	len = ft_nbrlen(n);
	nbr_as_str = (char *)malloc(len + 1);
	if (nbr_as_str == NULL)
		return (NULL);
	i = 1;
	nbr_as_str[len] = '\0';
	if (nb < 0)
	{
		nb *= -1;
		negative = 1;
		nbr_as_str[0] = '-';
	}
	while (i <= len)
	{
		nbr_as_str[len - i] = '0' + (nb % 10);
		nb /= 10;
		i++;
	}
	if (negative)
		nbr_as_str[0] = '-';
	return (nbr_as_str);
}
