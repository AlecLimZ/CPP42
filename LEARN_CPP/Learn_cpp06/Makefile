NAME		=	main
SRC			=	main.cpp
OBJ			=	$(SRC:%.cpp=%.o)
HEADER		=	-I.
CXXFLAGS	+=	-Wall -Wextra -Werror -pedantic -fsanitize=address

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) $^ -o $@

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
