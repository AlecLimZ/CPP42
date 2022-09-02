NAME		=	main
SRC			=	main.cpp
OBJ			=	$(SRC:%.cpp=%.o)
H			=	-I.
HFILE		=	easyfind.hpp
CXXFLAGS	+=	-Wall -Wextra -Werror -std=c++98 $(H) -pedantic

all:		$(NAME)

$(OBJ):		$(SRC) $(HFILE)
			$(CXX) -c $(CXXFLAGS) $<

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) $^ -o $@

1:			$(OBJ) $(HFILE)
			$(CXX) $(CXXFLAGS) $< -fsanitize=address -o $(NAME)

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
