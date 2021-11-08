/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:29:53 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/08 13:20:59 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*d;
	const char	*s;

	d = dst;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dst):
}
