NAME		=	main
SRC			=	main.cpp Span.cpp
OBJ			=	$(SRC:%.cpp=%.o)
H			=	-I.
HFILE		=	Span.hpp
CXXFLAGS	+=	-Wall -Wextra -Werror -pedantic -std=c++98 $(H)

all:		$(NAME)

$(OBJ):		$(SRC) $(HFILE)
#			$(CXX) $(CXXFLAGS) -c $(SRC)

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) $^ -o $@ -fsanitize=address

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
