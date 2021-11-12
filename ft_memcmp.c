/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:50:47 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/12 18:49:59 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *a, const void *b, size_t n)
{
	while ((*(unsigned char *)a == *(unsigned char*)b) && --n)
	{
		a++;
		b++;
	}
	return ((*(unsigned char *)a) - (*(unsigned char *)b));
}
