# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 15:50:47 by leng-chu          #+#    #+#              #
#    Updated: 2022/06/29 13:04:34 by leng-chu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	replace
SRC		=	main.cpp replace.cpp
OBJ		= 	*.o
CC		= 	c++ -Wall -Werror -Wextra -std=c++98 -fsanitize=address
INC		=	-I.

all:		$(NAME)

$(OBJ):		$(SRC)
			@$(CC) $(INC) -c $^

$(NAME):	$(OBJ)
			@$(CC) $^ -o $@

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
