/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:16:22 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/15 13:11:04 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	destlen;
	size_t	srclen;
	size_t	atmost;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (destlen > dstsize)
		return (srclen + dstsize);
	if (srclen < dstsize)
		atmost = srclen;
	else
		atmost = dstsize;
	ft_memcpy(dest + destlen, src, atmost);
	dest[destlen + atmost] = '\0';
	return (destlen + srclen);
}
