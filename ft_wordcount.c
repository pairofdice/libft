/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:22:54 by jsaarine          #+#    #+#             */
/*   Updated: 2021/12/19 10:49:09 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	counts the number of words in s separated by c
*/

int	ft_wordcount(char const *s, char c, int wordcount)
{
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			wordcount++;
			s++;
		}
		while (*s != c && *s)
			s++;
	}
	return (wordcount);
}
