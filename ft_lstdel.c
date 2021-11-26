/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:29:22 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/24 15:35:22 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	**temp;
	while ((*alst)->next)
	{
		temp = &((*alst)->next);
		ft_lstdelone(alst, del);
		alst = temp;
	}
	ft_lstdelone(alst, del);
	free(*alst);
	*alst = NULL;
}
