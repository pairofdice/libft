#include "libft.h"

int	vec_resize(t_vec *src, size_t target_size)
{
	t_vec resized;

	if (!src || !src->memory)
		return (-1);
	if (vec_new(&resized, target_size, src->elem_size) == -1)
		return (-1);
	if (vec_from(&resized, src, target_size, src->elem_size) == -1)
		return (-1);
	vec_free(src);
	*src = resized;
	return (1);
}
