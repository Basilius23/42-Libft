# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vbychik <vbychik@student.42prague.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/22 16:39:42 by vbychik           #+#    #+#              #
#    Updated: 2024/06/22 20:25:07 by vbychik          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
CC = cc
CFLAGS = -Wall -Werror -Wextra -g3
AR = ar rcs
SRC = ft_isalpha \
	ft_isdigit \
	ft_isalnum \
	ft_isascii \
	ft_isprint \
	ft_strlen \
	ft_memset \
	ft_bzero \
	ft_memcpy \
	ft_memmove \
	ft_strlcpy \
	ft_strlcat \
	ft_toupper \
	ft_tolower \
	ft_strchr \
	ft_strrchr \
	ft_strncmp \
	ft_memchr \
	ft_memcmp \
	ft_strnstr \
	ft_atoi \
	ft_calloc \
	ft_strdup \
	ft_substr \
	ft_strjoin \
	ft_strtrim \
	ft_split \
	ft_itoa \
	ft_strmapi \
	ft_striteri \
	ft_putchar_fd \
	ft_putstr_fd \
	ft_putendl_fd \
	ft_putnbr_fd


SRCS = $(addsuffix .c, $(SRC))
OBJS = $(addsuffix .o, $(SRC))


%.o:%.c	$(SRCS)
	$(CC)	$(CFLAGS) -c -o $@ $<

$(NAME):	$(OBJS)
	$(AR) $@ $^

all:	$(NAME)

clean:
	rm -f *.o

fclean:	clean
	rm -f	$(NAME)

re:	clean all

.PHONY:	all clean fclean re