# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/09 21:52:21 by agarzon-          #+#    #+#              #
#    Updated: 2019/11/09 21:52:21 by agarzon-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FUN = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
ft_memset.c ft_strchr.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c \
ft_toupper.c ft_strlcpy.c ft_strnstr.c ft_atoi.c ft_strlcat.c ft_calloc.c ft_strdup.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c

OBJS = ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o \
ft_isprint.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o \
ft_memset.o ft_strchr.o ft_strlen.o ft_strncmp.o ft_strrchr.o ft_tolower.o \
ft_toupper.o ft_strlcpy.o ft_strnstr.o ft_atoi.o ft_strlcat.o ft_calloc.o ft_strdup.o \
ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) libft.h
	@gcc -c $(CFLAGS) $(FUN)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all