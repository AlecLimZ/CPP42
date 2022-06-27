# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 15:50:47 by leng-chu          #+#    #+#              #
#    Updated: 2022/06/27 15:58:52 by leng-chu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	replace
SRC		=	main.cpp replace.cpp
CC		= 	c++ -Wall -Werror -Wextra -std=c++98

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) $^ -o $@

clean:
			rm -rf $(NAME)

re:			clean all

.PHONY:		all clean re
