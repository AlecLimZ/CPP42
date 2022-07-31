NAME	=	poly
SRC		=	main.cpp animal.cpp wrongAnimal.cpp
OBJ		=	*.o
CFLAG	= 	-Wall -Wextra -Werror -std=c++98 -fsanitize=address -pedantic
HEADER	=	-I.

all:		$(NAME)

$(OBJ):		$(SRC)
			$(CXX) $(CFLAG) $(HEADER) -c $^

$(NAME):	$(OBJ)
			$(CXX) $(CFLAG) $^ -o $@

clean:
			rm -rf $(NAME)

fclean:		clean
			rm -rf $(OBJ)

re:			fclean all

.PHONY:		all clean fclean re
