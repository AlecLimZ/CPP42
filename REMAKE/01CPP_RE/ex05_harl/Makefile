# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/07 13:09:30 by leng-chu          #+#    #+#              #
#    Updated: 2022/07/07 16:24:02 by leng-chu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	zombie
SRC		=	main.cpp Harl.cpp
OBJ		=	*.o
CC		=	c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address
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
