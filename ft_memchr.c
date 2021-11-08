/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:38:52 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/08 13:49:09 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*src == (unsigned char) c)
			return (src);
	}
	return (NULL);
}
