# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 15:08:02 by leng-chu          #+#    #+#              #
#    Updated: 2022/06/29 13:01:55 by leng-chu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	harlFilter
SRC		=	main.cpp Harl.cpp
OBJ		=	*.o
GCC		=	c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address
INC		=	-I.

all:		$(NAME)

$(OBJ):		$(SRC)
			@$(GCC) $(INC) -c $^

$(NAME): 	$(OBJ)
			@$(GCC) $^ -o $@

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:	all clean fclean re
