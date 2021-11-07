/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:17:40 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/07 15:44:34 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>

int	ft_strncmp(const char *a, const char *b, size_t n);
int ft_strcmp(const char *a, const char *b);
int ft_atoi(const char *str);
int ft_tolower(int c);

char * ft_itoa(int n);
int ft_isdigit(int c);
void ft_putchar(char c);
void ft_putstr(char const *s);
void ft_putendl(char const *s);
void ft_putnbr(int n);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char const *s, int fd);
void ft_putendl_fd(char const *s, int fd);
void ft_putnbr_fd(int n, int fd);

#endif
