NAME		=	main
SRC			=	main.cpp Bureaucrat.cpp
OBJ			=	$(SRC:%.cpp=%.o)
CXXFLAGS	+=	-Wall -Wextra -Werror -std=c++98 -pedantic

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) $^ -o $@

1:			$(OBJ)
			$(CXX) $(CXXFLAGS) -fsanitize=address $^ -o $(NAME)

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
