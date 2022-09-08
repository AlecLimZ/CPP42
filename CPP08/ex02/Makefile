NAME		=	main
SRC			=	main.cpp mutantstack.cpp
OBJ			=	$(SRC:%.cpp=%.o)
H			=	-I.
HFILE		=	mutantstack.hpp
CXXFLAGS	+=	-Wall -Werror -Wextra -pedantic -std=c++98 $(H)

all:		$(NAME)

$(OBJ):		$(SRC) $(HFILE)
			$(CXX) $(CXXFLAGS) -c $(SRC)

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) $^ -o $@

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
