#include "../libft.h"
#include <fcntl.h>

int main()
{
	char c;
	int fd = open("test", O_CREAT | O_TRUNC | O);

	c = 'a';
	while (c <= 'z')
	{
		ft_putchar_fd(c, 1);
		c++;
	}
	ft_putchar_fd('\n', 1);
	c = 'a';
	while (c <= 'z')
	{
		ft_putchar_fd(c, 2);
		c++;
	}
	ft_putchar_fd('\n', 2);
}
