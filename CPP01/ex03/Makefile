# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 18:24:32 by leng-chu          #+#    #+#              #
#    Updated: 2022/06/24 18:36:34 by leng-chu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	violence
SRC		=	main.cpp	
GCC		=	c++ -Wall -Wextra -Wextra -std=c++98

all:		$(NAME)

$(NAME):	$(SRC)
			$(GCC) $^ -o $@

clean:
			rm -rf $(NAME)

re:			clean all

.PHONY:		all clean re
