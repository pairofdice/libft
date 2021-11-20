/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:33:37 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/19 19:17:13 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	ft_ncmp(const char *a, const char *b, size_t len)
{
	while (*a && *b &&len)
	{
		if (*a != *b)
			return (0);
		a++;
		b++;
		len--;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && --len)
	{
		if (ft_ncmp(haystack, needle, len))
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
