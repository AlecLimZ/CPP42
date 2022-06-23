# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/23 19:11:11 by leng-chu          #+#    #+#              #
#    Updated: 2022/06/23 19:13:44 by leng-chu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	brain
SRC		=	main.cpp
GCC		=	c++ -Wall -Wextra -Werror -std=c++98

all:		$(NAME)

$(NAME):	$(SRC)
			$(GCC) $^ -o $@

clean:
			rm -rf $(NAME)

re:			clean all

.PHONY:		all clean re
