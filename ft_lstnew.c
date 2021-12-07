/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 17:31:45 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/26 15:41:22 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_null_zero(t_list	**new, size_t *cs)
{
	(*new)->content = NULL;
	*new = NULL;
	*cs = 0;
}

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	if (!content || content_size == 0)
		ft_null_zero(&new, &content_size);
	else
	{
		new->content = (void *)malloc(content_size);
		if (!new->content)
		{
			free(new);
			return (NULL);
		}
		ft_memcpy(new->content, content, content_size);
		if (!content || content_size == 0)
			ft_null_zero(&new, &content_size);
		new->content_size = content_size;
		new->next = NULL;
	}
	return (new);
}
