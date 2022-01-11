#include "libft.h"

int	vec_push(t_vec *src, void *elem)
{
	if (!src || !elem)
		return (-1);
	if ((src->len * src->elem_size) == src->alloc_size)
		if (vec_resize(src, src->len * 2) == -1)
			return (-1);
	ft_memcpy(&src->memory[src->len * src->elem_size], elem, src->elem_size);
	src->len++;
	return (1);
}
