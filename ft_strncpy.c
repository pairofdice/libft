/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:47:29 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/11 15:55:41 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (srclen < len)
		ft_memset(dst + srclen, '\0', len - srclen);
	return (ft_memcpy(dst, src, srclen));
}
