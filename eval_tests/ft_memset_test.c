/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:26:54 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/24 13:00:04 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"
#include "ft_colors.h"

int memset_1(void)
{
	char a[20] = "aaaaaaaaaaaaaaaaaaa";
	char b[20] = "aaaaaaaaaaaaaaaaaaa";
	int i = 0;
	int j;
	int ns[] = {-10, 0, 9, 32, 48};
	int lens[] = {0, 1, 20};


	
	printf("ft_memset: \t");

	while (i < 5)
	{
		j = 0;
		while (j < 3)
		{
			
			memset(a, ns[i], lens[j]);
			ft_memset(b, ns[i], lens[j]);
			if (strcmp(a, b) != 0)
			{
				printf("\nft_memset:" BHRED "\t--fail--" reset);
				printf("\ninput:     \t%s\t%d\t%d", a, ns[i], lens[j]);
				printf("\nmemset:    \t%s", a);
				printf("\nft_memset: \t%s\n\t\t", b);

			}
			else
				printf(BHGRN "[OK]" reset);
			
			j++;
		}
		i++;
	}

	printf("\n");
}


void	ft_memset_test(void)
{

		int i = 0;

	//int (*funs[])(char *) = {atoi_1, atoi_1, atoi_1, atoi_1, atoi_1, atoi_1, atoi_1, atoi_1, atoi_1, atoi_1, atoi_1, 0};
	char *teststrs[] = {
		""

		, 0
	};
	printf("ft_memset: \t");
	while (teststrs[i] != 0)
	{
		char *str = teststrs[i];
		if (memset_1(0) != 0)
			printf(BHGRN "[OK]" reset);
		else
		{
			
			printf(BHRED "\n\t\t--fail--" reset);
			printf("\ninput:   \t%s", );
			printf("\natoi:    \t%d", memset());
			printf("\nft_atoi: \t%d\n\t\t", ft_memset());
		}
		i++;
	}
	printf("\n");
}
