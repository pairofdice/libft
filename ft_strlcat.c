/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:16:22 by jsaarine          #+#    #+#             */
/*   Updated: 2021/12/06 16:47:16 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (i < dstsize - dst_len - 1)
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	if (i != 0)
		dest[dst_len + i] = '\0';
	return (dst_len + ft_strlen(src));
}*/
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	destlen;
	size_t	srclen;
	size_t	atmost;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (srclen == 0)
		return (destlen);
	if (destlen > dstsize)
		return (srclen + dstsize);
	atmost = dstsize - destlen - 1;
	if (atmost < 0)
		return (destlen + srclen);
	ft_strncpy(dest + destlen, src, atmost);
	dest[destlen + atmost] = '\0';
	return (destlen + srclen);
}
