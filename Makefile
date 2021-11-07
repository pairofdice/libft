# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsaarine <jsaarine@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 12:23:08 by jsaarine          #+#    #+#              #
#    Updated: 2021/11/07 15:18:04 by jsaarine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

BUILD_DIR = ./build

FLAGS = -Wall -Wextra -Werror

SRCS = ft_putnbr.c ft_putchar.c ft_putstr.c ft_putnbr_fd.c ft_putendl_fd.c \
	   ft_putchar_fd.c ft_putnbr.c ft_putchar.c ft_isdigit.c ft_putstr_fd.c \
	   ft_itoa.c ft_tolower.c ft_atoi.c ft_strcmp.c ft_strncmp.c

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