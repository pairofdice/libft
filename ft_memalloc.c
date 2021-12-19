/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:05:58 by jsaarine          #+#    #+#             */
/*   Updated: 2021/12/19 07:50:51 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*freshbytes;

	if (size == 0)
		return (NULL);
	freshbytes = malloc(size);
	if (!freshbytes)
		return (NULL);
	ft_bzero(freshbytes, size);
	return (freshbytes);
}
