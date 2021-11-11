/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:44:34 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/11 12:19:23 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (*(unsigned char *)src && n--)
	{
		if (*(unsigned char *)src == (unsigned char)c)
			return (++dst);
		*(unsigned char *)dst++ = *(unsigned char *)src++;
	}
	return (NULL);
}
