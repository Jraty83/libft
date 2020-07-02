# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jraty <jraty@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/11 14:31:07 by jraty             #+#    #+#              #
#    Updated: 2020/07/01 09:48:54 by jraty            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

LIB = libft.a

SRCS = ../*.c main.c

OBJS = *.o

HDRS = ../libft.h

FLAGS = -Wall -Wextra -Werror

all:
	@gcc $(FLAGS) -c $(SRCS) -I $(HDRS)
	@ar rc $(LIB) $(OBJS)
	@ranlib $(LIB)
	gcc $(FLAGS) $(SRCS) -I $(HDRS) -L . $(LIB) -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME) $(LIB)

re: fclean all
