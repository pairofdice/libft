/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:17:40 by jsaarine          #+#    #+#             */
/*   Updated: 2021/11/13 13:47:23 by jsaarine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	ft_memdel(void **ap);
char	*ft_strstr(const char *a, const char *b);
int		ft_strncmp(const char *a, const char *b, size_t n);
int		ft_strcmp(const char *a, const char *b);
int		ft_atoi(const char *str);
int		ft_tolower(int c);

void	ft_strclr(char *s);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
char	*ft_strdup(const char *s1);
void	* ft_memalloc(size_t size);
char	* ft_itoa(int n);
size_t	ft_strlen(const char *str);
char	*ft_strcpy(char * dst, const char * src);
char	*ft_strncpy(char * dst, const char * src, size_t len);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
