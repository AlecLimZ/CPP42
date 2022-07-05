# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leng-chu <leng-chu@42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/05 13:48:34 by leng-chu          #+#    #+#              #
#    Updated: 2022/07/05 13:59:35 by leng-chu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phonebook
SRC		=	phonebook.cpp main.cpp
OBJ		=	*.o
HEAD	=	-I.
GCC		=	-c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address

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

.PHONY:		all fclean clean re
