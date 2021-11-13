#include "../libft.h"
#include <string.h>


int	main()
{
	char dst[] = "abcdefg";
	char src[] = "12";
	int len = 3;
	int i = 0;

	strncpy(dst, src, len);

	while (i < 8)
	{
		if (dst[i] == '\0')
			ft_putchar('0');
		else
			ft_putchar(dst[i]);
		i++;
	}
	ft_putchar('\n');
}
