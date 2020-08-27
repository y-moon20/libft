# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yomoon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/16 16:46:08 by yomoon            #+#    #+#              #
#    Updated: 2020/08/26 19:12:38 by yomoon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CCFLAGS = -Wall -Wextra -Werror
NAME = libft.a
INCLUDES = includes
SRCS = ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_substr.c ft_strjoin.c ft_calloc.c ft_strdup.c ft_isascii.c ft_memchr.c  ft_memset.c  ft_strlen.c  ft_tolower.c ft_bzero.c   ft_isdigit.c ft_memcmp.c  ft_strchr.c  ft_strncmp.c ft_toupper.c ft_isalnum.c ft_isprint.c ft_memcpy.c  ft_strlcat.c ft_strnstr.c ft_isalpha.c ft_memccpy.c ft_memmove.c ft_strlcpy.c ft_strrchr.c ft_atoi.c
OBJS = ${SRCS:.c=.o}

BONUS_SRCS = ft_lstsize.c ft_lstnew.c
BONUS_OBJS = ${BONUS_SRCS:.c=.o}

all : ${NAME}

${NAME} : ${OBJS}
	ar cr ${NAME} ${OBJS}

.c.o:
	${CC} ${CCFLAGS} -c $< -o $@ -I ${INCLUDES}

clean:
	rm -f ${OBJS} ${BONUS_OBJS}

re: fclean all

bonus: ${OBJS} ${BONUS_OBJS}
		ar cr ${NAME} ${OBJS} ${BONUS_OBJS}

fclean: clean
		rm -f ${NAME}
