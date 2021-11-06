/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:28:01 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/06 14:22:13 by jsaarine         ###   ########.fr       */
/*                                                                            */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n < 0 )
	{
		ft_putchar('-');
		if (n == -2147483648)
		{
			ft_putchar('2');
			ft_putnbr(147483648);
			return ;
		}
		n *= -1;
	}
	if (n > 10)
	{
		ft_putnbr_fd(n / 10);
		ft_putnbr_fd(n % 10);
	}
	else
		ft_putchar('0' + n);
}
