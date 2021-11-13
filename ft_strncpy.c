/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:47:29 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/13 14:52:07 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	srclen;

	if (len == 0)
		ft_memset(dst, '\0', ft_strlen(dst));
	srclen = ft_strlen(src);
	if (srclen >= len)
		ft_memcpy(dst, src, len);
	return (dst);
}
