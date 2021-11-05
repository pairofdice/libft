/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:02:30 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/02 20:58:44 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr(char *str, fd)
{
	while (*str)
		ft_putchar(*str++, fd);
}

void ft_putendl_fd(char const *s, int fd)
{
	ft_putstr(s, fd);
	ft_putstr("\n", fd);
}
