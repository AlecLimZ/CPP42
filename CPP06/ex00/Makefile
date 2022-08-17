NAME		=	main
SRC			=	main.cpp Conversion.cpp
OBJ			=	$(SRC:%.cpp=%.o)
HEADER		=	-I.
CXXFLAGS	+=	-Wall -Wextra -Werror $(HEADER) -std=c++98 -pedantic -fsanitize=address

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) $^ -o $@

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all fclean clean re
