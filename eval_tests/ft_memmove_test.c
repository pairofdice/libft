#include <string.h>
#include <stdio.h>
#include "../libft.h"

int main()
{
	char dst1[] = "ABCDEFG";
	char dst2[] = "ABCDEFG";
	char *src1 = dst1 + 4;
	char *src2 = dst2 + 4;

	memmove(dst1, src1, 3);
	ft_memmove(dst2, src2, 3);
	printf("REF:  %s\n", dst1);
	printf("mine: %s\n", dst2);
}
