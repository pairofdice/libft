/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:26:54 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/08 11:56:46 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

void	ft_memset_test(void)
{
	char a[20] = "aaaaaaaaaaaaaaaaaaa";
	char b[20] = "aaaaaaaaaaaaaaaaaaa";
	printf("REF:  %s\n", memset(a, 48, 5));
	printf("mine: %s\n", ft_memset(a, 48, 5));
}
