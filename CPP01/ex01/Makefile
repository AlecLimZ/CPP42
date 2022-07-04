# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/22 19:52:20 by leng-chu          #+#    #+#              #
#    Updated: 2022/07/04 13:22:41 by leng-chu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= zombie
SRC		= main.cpp Zombie.cpp zombieHorde.cpp
OBJ		= *.o
GCC		= c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address
INC		= -I.

all:		$(NAME)

$(OBJ):		$(SRC)
			@$(GCC) $(INC) -c $^

$(NAME):	$(OBJ)
			@$(GCC) $^ -o $@

clean:
			@rm -rf $(OBJ)

fclean: 	clean
			@rm -rf $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
