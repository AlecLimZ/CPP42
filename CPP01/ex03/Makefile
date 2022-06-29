# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 18:24:32 by leng-chu          #+#    #+#              #
#    Updated: 2022/06/29 12:54:19 by leng-chu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	violence
SRC		=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ		= 	*.o
GCC		=	c++ -Wall -Wextra -Wextra -std=c++98 -fsanitize=address
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
