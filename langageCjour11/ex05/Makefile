# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rqouchic <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/13 20:53:18 by rqouchic          #+#    #+#              #
#    Updated: 2019/09/15 21:04:40 by rqouchic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "do-op"

SRCS	= main.c

OBJS	=	$(SRCS:.c=.o)

INCLUDES =	./includes/

CGLAGS =	-Wall -Wextra -Werror

all : $(NAME)

.c.o :
	gcc -c $(CFLAGS) $< -o $(<:.c=.o)

$(NAME) : ${OBJS}
	gcc ${OBJS} -o $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
