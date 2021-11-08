/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:44:34 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/08 13:23:34 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
			size_t n)
{
	char	*d;
	const char	*s;

	d = dst;
	s = src;
	while (n--)
	{
		if (*s == (unsigned char)c)
			return (++s);
		*d++ = *s++;
	}
	return (NULL):
}
