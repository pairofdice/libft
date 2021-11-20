/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:47:19 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/19 17:17:54 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	/*
	while (*s)
	{
		if (*s == (char) c)
			return ((char *)s);
		s++;
		if (*s == (char) c)
			return ((char *)s);

	}
	return (NULL);
	*/
	int i;
	int len;

	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (s[i] == (char) c)
			return ((char *)s + i);
		i++;
	}

	return (NULL);
}
