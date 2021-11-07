/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:24:48 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/07 15:28:10 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "../libft.h"
#include <string.h>

int main(void)
{
	printf("REF:    %d\n", strncmp("Hello", "Hello", 5));
	printf("tested: %d\n", ft_strncmp("Hello", "Hello", 5));
	printf("REF:    %d\n", strncmp("Hello", "Hell", 5));
	printf("tested: %d\n", ft_strncmp("Hello", "Hell", 5));
	printf("REF:    %d\n", strncmp("Hello", "Hella", 5));
	printf("tested: %d\n", ft_strncmp("Hello", "Hella", 5));
	printf("REF:    %d\n", strncmp("Hello", "Hellz", 5));
	printf("tested: %d\n", ft_strncmp("Hello", "Hellz", 5));
	printf("REF:    %d\n", strncmp("a", "d", 1));
	printf("tested: %d\n", ft_strncmp("a", "d", 1));
}
