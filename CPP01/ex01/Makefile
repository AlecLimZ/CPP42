# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/22 19:52:20 by leng-chu          #+#    #+#              #
#    Updated: 2022/06/23 18:20:19 by leng-chu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= zombie
SRC		= main.cpp Zombie.cpp
GCC		= c++ -Wall -Wextra -Werror -std=c++98

all:	$(NAME)

$(NAME):	$(SRC)
		$(GCC) $^ -o $@

clean:
		rm -rf $(NAME)

fclean: clean

re:		fclean all

.PHONY:	all clean fclean re
