# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 16:27:34 by elmanea           #+#    #+#              #
#    Updated: 2023/10/18 20:45:25 by elmanea          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

FLAGS	= -Wall -Wextra -Werror

CC	= gcc
RM	= rm -f

INC	= libft.h

SOURCES	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c\
ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c\
ft_atoi.c ft_calloc.c ft_strdup.c ft_strjoin.c ft_strtrim.c ft_substr.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c\
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strnstr.c ft_striteri.c

OBJECTS	= $(SOURCES:.c=.o)

%.o: %.c $(INC) Makefile
	$(CC) $(FLAGS)  -c $< -o $@

all:	$(NAME)

$(NAME):	$(OBJECTS)
		ar rcs $(NAME) $(OBJECTS)

clean:
		$(RM) $(OBJECTS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY:	all clean fclean re

