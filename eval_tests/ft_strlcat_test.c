#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"
#include "ft_colors.h"

int	strlcat_a()
{
	char	*str = "lie.!\0I'm.hidden.lol\r\n";
 	char	buff1[0xF00] = "sky";
 	char	buff2[0xF00] = "sky";
	printf("str len: %zu, buff len: %zu\n", strlen(str), strlen(buff1));

	size_t ref = strlcat(buff1, str, ft_strlen("sky") + ft_strlen("lie.!\0I'm.hidden.lol\r\n"));
	size_t mine = ft_strlcat(buff2, str, ft_strlen("sky") + ft_strlen("lie.!\0I'm.hidden.lol\r\n"));

	if (ref == mine)
	{
		if (ft_strcmp(buff1,  buff2) == 0)
			return (1);
	}
	

	printf("REF:  %s\n", buff1);
	printf("mine: %s\n", buff2);
	printf("str len: %zu, buff1 len: %zu ref strlcat: %zu\n", strlen(str), strlen(buff1), ref);
	printf("buff2 len: %zu my strlcat: %zu\n", strlen(buff1), mine);
	return (0);
}

int strlcat_b()
{
	char	*str = "\0I'm.hidden.lol\r\n";
 	char	buff1[0xF00] = "";
 	char	buff2[0xF00] = "";
	printf("str len: %zu, buff len: %zu\n", strlen(str), strlen(buff1));

	size_t ref = strlcat(buff1, str, ft_strlen("") + ft_strlen("\0I'm.hidden.lol\r\n"));
	size_t mine = ft_strlcat(buff2, str, ft_strlen("") + ft_strlen("\0I'm.hidden.lol\r\n"));

	if (ref == mine)
	{
		if (ft_strcmp(buff1,  buff2) == 0)
			return (1);
	}
	
/* 
	printf("REF:  %s\n", buff1);
	printf("mine: %s\n", buff2);
	printf("str len: %zu, buff1 len: %zu ref strlcat: %zu\n", strlen(str), strlen(buff1), ref);
	printf("buff2 len: %zu my strlcat: \n", strlen(buff1)); */
	return (0);
	return (0);
}

int strlcat_c()
{
	char	*buff1;
	char	*buff2;
	if (!(buff1 = (char *)malloc(sizeof(*buff1) * 15)))
		return (0);
	ft_memset(buff1, 0, 15);
	ft_memset(buff1, 'r', 6);
	if (!(buff2 = (char *)malloc(sizeof(*buff2) * 15)))
		return (0);
	ft_memset(buff2, 0, 15);
	ft_memset(buff2, 'r', 6);
	char	*str = "lorem ipsum dolor sit amet";
	printf("str len: %zu, buff len: %zu\n", strlen(str), strlen(buff1));

	size_t ref = strlcat(buff1, str, 6);
	size_t mine = ft_strlcat(buff2, str, 6);

	/* if (ref == mine)
	{
		if (ft_strcmp(buff1,  buff2) == 0)
			return (1);
	} */
	

	printf("\n\nREF:  %s\n", buff1);
	printf("mine: %s\n", buff2);
	printf("\tstr len: %zu, buff1 len: %zu ref strlcat: %zu\n", strlen(str), strlen(buff1), ref);
	printf("\tbuff2 len: %zu my strlcat: \n", ft_strlen(buff2));
	return (0);
	return (0);
}

void ft_strlcat_test(void)
{
	int f_i = 0;

	int (*funs[])() = {strlcat_a, strlcat_b, strlcat_c, 0};
	while (funs[f_i] != 0)
	{
		if (funs[f_i]() != 0)
			printf("💚");
		else
			printf("💔");
		f_i++;
	}
	printf("\n");

}
