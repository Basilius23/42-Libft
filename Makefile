# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vbychik <vbychik@student.42prague.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/22 16:39:42 by vbychik           #+#    #+#              #
#    Updated: 2024/06/22 17:17:40 by vbychik          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
AR = ar rcs
SRC =  ft_atoi \
	ft_bzero \
	ft_calloc \
	ft_isalnum \
	ft_isalpha \
	ft_isascii \
	ft_isdigit \
	ft_isprint \
	ft_itoa \
	ft_memchr \
	ft_memcmp \
	ft_memcpy \
	ft_memmove \
	ft_memset \
	ft_putchar_fd \
	ft_putendl_fd \
	ft_putnbr_fd \
	ft_putstr_fd \
	ft_split \
	ft_strchr \
	ft_strdup \
	ft_striteri \
	ft_strjoin \
	ft_strlcat \
	ft_strlcpy \
	ft_strlen \
	ft_strmapi \
	ft_strncmp \
	ft_strnstr \
	ft_strrchr \
	ft_strtrim \
	ft_substr \
	ft_tolower \
	ft_toupper \

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@@echo "Library $(NAME) created."

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $<"

clean:
	@rm -f $(OBJS)
	@echo "Cleaned object files.""

fclean:
	@rm -f $(NAME)
	@echo "Cleaned Library."

re: fclean all

print:
	@echo "Source files: $(SRCS)"
	@echo "Object files: $(OBJS)"

.PHONY: all clean fclean re print