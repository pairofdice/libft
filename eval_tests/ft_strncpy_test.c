#include "../libft.h"

int	main()
{
	char dst[] = "Hello";
	char src[] = "Wor";
	int len = 3;
	int i = 0;

	ft_strncpy(dst, src, len);

	while (i < 6)
	{
		if (dst[i] == '\0')
			ft_putchar('0');
		else
			ft_putchar(dst[i]);
		i++;
	}
	ft_putchar('\n');
}
