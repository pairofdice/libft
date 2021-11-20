/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:02:06 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/15 16:32:39 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_cmp(const char *a, const char *b)
{
	while (*a && *b)
	{
		if (*a != *b)
			return (0);
		a++;
		b++;
	}
	return (1);
}

char	*ft_strstr(const char *haystack, const char *needle)
{
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack)
	{
		if (ft_cmp(haystack, needle))
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
