# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rqouchic <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/12 09:59:16 by rqouchic          #+#    #+#              #
#    Updated: 2019/09/18 18:52:52 by rqouchic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rc libft.a *.o
