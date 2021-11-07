/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:16:56 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/07 13:18:13 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../libft.h"
#include <stdio.h>

int main(void)
{
	printf("REF:    %d\n", atoi(""));
	printf("tested: %d\n", ft_atoi(""));
	printf("REF:    %d\n", atoi(" \t\n\v\f\r 0x1234"));
	printf("tested: %d\n", ft_atoi(" \t\n\v\f\r 0x1234"));
	printf("REF:    %d\n", atoi("1yadf"));
	printf("tested: %d\n", ft_atoi("1yadf"));
	printf("REF:    %d\n", atoi("-1"));
	printf("tested: %d\n", ft_atoi("-1"));
	printf("REF:    %d\n", atoi("-10"));
	printf("tested: %d\n", ft_atoi("-10"));
	printf("REF:    %d\n", atoi("10"));
	printf("tested: %d\n", ft_atoi("10"));
	printf("REF:    %d\n", atoi("123456"));
	printf("tested: %d\n", ft_atoi("123456"));
	printf("REF:    %d\n", atoi("2147483647"));
	printf("tested: %d\n", ft_atoi("2147483647"));
	printf("REF:    %d\n", atoi(" \t \r-2147483648x12"));
	printf("tested: %d\n", ft_atoi(" \t \r-2147483648x12"));
	printf("REF:    %d\n", atoi(" \t \r-214748364878x12"));
	printf("tested: %d\n", ft_atoi(" \t \r-214748364878x12"));
	printf("REF:    %d\n", atoi("214748364778"));
	printf("tested: %d\n", ft_atoi("214748364778"));
	printf("REF:    %d\n", atoi("214748364778123456"));
	printf("tested: %d\n", ft_atoi("214748364778123456"));
}
