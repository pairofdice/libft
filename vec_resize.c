#include "libft.h"

int	vec_resize(t_vec *src, size_t target_size)
{
	t_vec resized;

	if (!src || !src->memory)
		return (-1);
	if (vec_new(&resized, target_size, src->elem_size) == -1)
		return (-1);
	if (src->len > target_size)
	{
		ft_memcpy(resized.memory, src->memory, target_size * src->elem_size);
		resized.len = target_size;
	}
	else
	{
		ft_memcpy(resized.memory, src->memory, src->alloc_size);
		resized.len = src->len;
	}
	vec_free(src);
	*src = resized;
	return (1);
}
