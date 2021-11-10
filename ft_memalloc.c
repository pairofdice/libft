/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:05:58 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/10 16:40:38 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *freshbytes;

	freshbytes = malloc(size * sizeof(void *));
	if (!freshbytes)
		return (NULL);
	while (size--)
		*((char)freshbytes) = '\0';
	return (freshbytes);
}
