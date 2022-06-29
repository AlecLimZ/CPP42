# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/23 19:11:11 by leng-chu          #+#    #+#              #
#    Updated: 2022/06/29 12:53:48 by leng-chu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	brain
SRC		=	main.cpp
OBJ		= 	*.o
GCC		=	c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address
INC		=	-I.

all:		$(NAME)

$(OBJ):		$(SRC)
			@$(GCC) $(INC) -c $^

$(NAME):	$(OBJ)
			@$(GCC) $^ -o $@

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
