# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 15:08:02 by leng-chu          #+#    #+#              #
#    Updated: 2022/06/28 15:17:15 by leng-chu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	harl
SRC		=	main.cpp Harl.cpp
CC		=	c++ -Wall -Wextra -Werror -std=c++98

all:	$(NAME)

$(NAME): $(SRC)
		$(CC) $^ -o $@

clean:
		rm -rf $(NAME)

re:		clean all

.PHONY:	all clean re
