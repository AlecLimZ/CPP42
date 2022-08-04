NAME		=	poly
SRC			=	main.cpp animal.cpp wrongAnimal.cpp cat.cpp dog.cpp wrongCat.cpp brain.cpp
OBJ			=	$(SRC:%.cpp=%.o)
HEADER		=	-I.
CXXFLAGS	+= 	-Wall -Wextra -Werror -std=c++98 -pedantic -fsanitize=address
CXXFLAGS	+= 	$(HEADER)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) $^ -o $@

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
