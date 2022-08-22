NAME		=	main
SRC			=	main.cpp
OBJ			=	$(SRC:%.cpp=%.o)
HEAD		=	-I.
CXXFLAGS	+=	-Wall -Wextra -Werror -pedantic $(HEAD) -std=c++98 -fsanitize=address

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) $^ -o $@

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
