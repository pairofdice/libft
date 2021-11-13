# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 12:23:08 by jsaarine          #+#    #+#              #
#    Updated: 2021/11/13 16:52:11 by jsaarine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

BUILD_DIR = ./build

FLAGS = -Wall -Wextra -Werror

SRCS = ft_putnbr.c ft_putchar.c ft_putstr.c ft_putnbr_fd.c ft_putendl_fd.c \
	   ft_putchar_fd.c ft_putnbr.c ft_isdigit.c ft_putstr_fd.c \
	   ft_itoa.c ft_tolower.c ft_atoi.c ft_strcmp.c ft_strncmp.c ft_memset.c \
	   ft_bzero.c ft_memcpy.c ft_strlen.c ft_isalpha.c ft_isalnum.c \
	   ft_isascii.c ft_isprint.c ft_toupper.c ft_memccpy.c ft_memmove.c \
	   ft_memcmp.c ft_memdel.c ft_putendl.c ft_memalloc.c ft_strdup.c \
	   ft_strcpy.c ft_strncpy.c ft_memchr.c ft_strnew.c ft_strdel.c \
	   ft_strclr.c ft_strstr.c ft_strcat.c ft_strncat.c

OBJS = $(SRCS:.c=.o)

HDRS = libft.h 

all: $(NAME)

$(NAME): 
	gcc $(FLAGS) $(SRCS) -c -I$(HDRS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

agane: re
	make clean
