/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:03:22 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/12 18:59:10 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;

	dest = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dest)
		return (NULL);
	while (*src)
	{	
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
