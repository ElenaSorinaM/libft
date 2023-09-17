# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 16:27:34 by elmanea           #+#    #+#              #
#    Updated: 2023/09/17 11:20:39 by elmanea          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

FLAGS	= -Wall -Wextra -Werror

CC	= gcc
RM	= rm -f

SOURCES	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c

OBJECTS	= $(SOURCES:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJECTS)	
		ar rcs $(NAME) $(OBJECTS)

clean:
		$(RM) $(OBJECTS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY:	all clean fclean re

