/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:26:12 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/15 20:32:24 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*freshness;
	int		i;
	int		len;

	len = ft_strlen(s);
	i = 0;
	freshness = (char *)malloc(sizeof(*s) * (len + 1));
	if (!freshness)
		return (NULL);
	while (i < len)
	{
		freshness[i] = (*f)(i, (char)s[i]);
		i++;
	}
	freshness[i] = '\0';
	return (freshness);
}
