/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:52:27 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/18 15:45:33 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_wordcount(char const *s, char c, int wordcount)
{
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s++ != c)
			wordcount++;
		while (*s != c)
			s++;
	}
	return (wordcount);
}

char	**ft_wordmalloc(char const *s, char c, int wordcount, char **words)
{
	int	i;
	int	wordlen;
	char *wordstart;

	i = 0;
	while (i < wordcount)
	{
		while (*s == c)
			s++;
		if (*s != c)
		{
			i++;
			wordlen = 0;
			wordstart = s;
			while (*s != c)
			{	
				s++;
				wordlen++;
			}
		}

		mallocword!!!
	}
	return (words);
}

char ** ft_strsplit(char const *s, char c)
{
	int		wordcount;
	char	**words;

	wordcount = 0;
	wordcount = ft_wordcount(s, c, wordcount);
	words = malloc(wordcount *(sizeof(char *) + 1));
	words = ft_wordmalloc(s, c, wordcount, words);
	return (words);
}