#include "libft.h"
/*
	takes in a pointer to some memory, which then will be copied over to the new vector.
*/
int	vec_from(t_vec *dst, void *src, size_t len, size_t elem_size)
{
	if (!src)
		return (-1);
	if (vec_new(dst, len, elem_size) == -1)
		return (-1);
	ft_memcpy(dst->memory, src, dst->alloc_size);
	dst->len = len;
	return (1);
}
