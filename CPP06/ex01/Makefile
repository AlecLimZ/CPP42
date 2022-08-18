NAME		=	main
SRC			=	main.cpp Data.cpp Serial.cpp
OBJ			=	$(SRC:%.cpp=%.o)
HEADER		=	-I.
CXXFLAGS	+=	-Wall -Wextra -Werror -pedantic -std=c++98 -fsanitize=address

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) $^ -o $@

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all fclean clean re
