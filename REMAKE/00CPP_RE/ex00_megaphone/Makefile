# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 19:28:58 by leng-chu          #+#    #+#              #
#    Updated: 2022/07/05 12:36:36 by leng-chu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone
SRC		=	Megaphone.cpp
OBJ		=	*.o
GCC		=	c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address
HEAD	=	-I.

all:	$(NAME)

$(OBJ):	$(SRC)
		$(GCC) $(HEAD) -c $^

$(NAME):	$(OBJ)
			$(GCC) $^ -o $@

clean:
			rm -rf $(NAME)

fclean:		clean
			rm -rf $(OBJ)

re:			fclean all

.PHONY:		all clean fclean re
