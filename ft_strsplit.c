/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:52:27 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/22 17:47:34 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_wordcount(char const *s, char c, int wordcount)
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

static char	**ft_wordmalloc(char const *s, char c, int wordcount, char **words)
{
	int		i;
	int		wordlen;
	char	*wordstart;

	i = 0;
	while (i < wordcount)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			wordlen = 0;
			wordstart = (char *)s;
			while (*s != c && *s++)
				wordlen++;
			words[i] = (char *)malloc(sizeof(char) * (wordlen + 1));
			if (!words[i])
				return (NULL);
			ft_strncpy(words[i], wordstart, wordlen);
			words[i][wordlen] = '\0';
			i++;
		}
	}
	return (words);
}

char	**ft_strsplit(char const *s, char c)
{
	int		wordcount;
	char	**words;

	if (!s)
		return (NULL);
	wordcount = ft_wordcount(s, c, 0);
	words = malloc(sizeof(char *) * (wordcount + 1));
	if (!words)
		return (NULL);
	words = ft_wordmalloc(s, c, wordcount, words);
	words[wordcount] = 0;
	return (words);
}
