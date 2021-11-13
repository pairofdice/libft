/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:31:47 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/13 14:00:28 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	if (dst < src)
	{
		while (len--)
			*(char *)dst = *(char *)src;
	}	
	else
	{
		while (len--)
			*(char *)(dst + len) = *(char *)(src + len);
	}
	return (dst);
}
