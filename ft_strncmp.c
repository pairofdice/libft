/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:17:44 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/07 15:45:25 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *a, const char *b, size_t n)
{
	size_t i;

	i = 0;
	while (*a && *b && (*a == *b) && i < n)
	{
		a++;
		b++;
		i++;
	}
	return (((unsigned char)*a) - ((unsigned char)*b));
}
