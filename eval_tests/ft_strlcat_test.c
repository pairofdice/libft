#include <stdio.h>
#include <string.h>
#include "../libft.h"
#include "ft_colors.h"

int	strlcat_a()
{
	char	*str = "lie.!\0I'm.hidden.lol\r\n";
 	char	buff1[0xF00] = "sky";
 	char	buff2[0xF00] = "sky";
//	printf("str len: %zu, buff len: %zu\n", strlen(str), strlen(buff1));
	if (strlcat(buff1, str, ft_strlen("sky") + ft_strlen("lie.!\0I'm.hidden.lol\r\n")) != ft_strlcat(buff2, str, ft_strlen("sky") + ft_strlen("lie.!\0I'm.hidden.lol\r\n")))
		return (1);
	
	if (ft_strcmp(buff1,  buff2))
		return (1);

	//printf("REF:  %s\n", buff1);
	//printf("mine: %s\n", buff2);
	//printf("str len: %zu, buff len: %zu\n", strlen(str), strlen(buff1));
	return (0);
}

void ft_strlcat_test(void)
{
	int f_i = 0;

	int (*funs[])() = {strlcat_a, 0};
	while (funs[f_i] != 0)
	{
		if (funs[f_i]() != 0)
			printf(GRN "[OK]" reset);
		else
			printf(RED "-fail-" reset);
		f_i++;
	}
	printf("\n");

}
