# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohoussai <ohoussai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 18:04:21 by ohoussai          #+#    #+#              #
#    Updated: 2021/11/11 09:32:02 by ohoussai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = libft.a
CC = gcc
INC = ./
SRC = ft_isalnum.c ft_isascii.c ft_isprint.c ft_memmove.c ft_putchar_fd.c ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_tolower.c ft_bzero.c ft_isalpha.c \
	ft_isdigit.c ft_memcpy.c ft_memset.c ft_putstr_fd.c ft_strlcat.c ft_strlen.c ft_strrchr.c ft_toupper.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_putnbr_fd.c\
	ft_putendl_fd.c ft_substr.c ft_calloc.c ft_strdup.c
FLAGS = -Wall -Wextra -Werror
ARG = -c
OUT = *.o

all: 
	$(CC) $(ARG) $(FLAGS) $(SRC)
	 ar rc $(NAME) $(OUT)
clean:
	rm *.o
fclean:
	rm -f $(NAME)
	rm -f *.o
re : fclean all