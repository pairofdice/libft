/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:03:22 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/08 15:16:16 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *str)
{
	int		len;
	char	*dest;

	len = ft_strlen(src) + 1;
	dest = (char *) malloc(sizeof(src) * len);
	i = 0;
	while (len--)
	{
		
	}
}



char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dest;

	len = ft_strlen(src) + 1;
	dest = (char *) malloc(sizeof(src) * len);
	i = 0;
	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
