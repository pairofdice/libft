/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:58:16 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/22 17:46:12 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*freshness;
	size_t	s1len;
	size_t	s2len;
	size_t	len;
	size_t	i;

	if (!s1)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	len = s1len + s2len;
	freshness = (char *)malloc(sizeof(char) * (len + 1));
	if (!freshness)
		return (NULL);
	i = 0;
	while (i < s1len)
	{
		freshness[i] = s1[i];
		i++;
	}
	while ((i - s1len) < s2len)
	{
		freshness[i] = s2[i - s1len];
		i++;
	}
	freshness[len] = '\0';
	return (freshness);
}
