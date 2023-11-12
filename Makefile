# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhobba <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 21:38:57 by akhobba           #+#    #+#              #
#    Updated: 2023/11/12 10:45:01 by akhobba          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#
NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

HEADER = libft.h
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c\
	  ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	  ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
	  ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
	  ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_substr.c ft_tolower.c\
	  ft_toupper.c ft_strtrim.c ft_itoa.c\


OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

$(OBJ): $(SRC) $(HEADER) 
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

