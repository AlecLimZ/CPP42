NAME		=	interface
SRC			=	main.cpp materia.cpp ice.cpp cure.cpp character.cpp
OBJ			=	$(SRC:%.cpp=%.o)
HEADER		=	-I.
CXXFLAGS	+=	-Wall -Wextra -Werror -std=c++98 -pedantic
CXXFLAGS	+=	$(HEADER)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) -fsanitize=address $^ -o $@

leak:		$(OBJ)
			$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
