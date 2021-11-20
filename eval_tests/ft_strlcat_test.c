#include <stdio.h>
#include <string.h>
#include "../libft.h"

void ft_strlcat_test(void)
{
	char	*str = "lie.!\0I'm.hidden.lol\r\n";
 	char	buff1[0xF00] = "sky";
 	char	buff2[0xF00] = "sky";
	printf("str len: %zu, buff len: %zu\n", strlen(str), strlen(buff1));

	strlcat(buff1, str, ft_strlen("sky") + ft_strlen("lie.!\0I'm.hidden.lol\r\n"));
	ft_strlcat(buff2, str, ft_strlen("sky") + ft_strlen("lie.!\0I'm.hidden.lol\r\n"));
	
	printf("REF:  %s\n", buff1);
	printf("mine: %s\n", buff2);
	printf("str len: %zu, buff len: %zu\n", strlen(str), strlen(buff1));

}
