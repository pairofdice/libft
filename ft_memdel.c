/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:40:53 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/10 17:37:45 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}
