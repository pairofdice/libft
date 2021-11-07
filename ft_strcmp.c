/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:31:32 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/07 14:04:20 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *a, const char *b)
{
	while (*a && *b && (*a == *b))
	{
		a++;
		b++;
	}
	return (*a - *b);
}