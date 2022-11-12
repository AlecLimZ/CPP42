NAME		=	main
SRC			=	main.cc function.cc
OBJ			=	$(SRC:%.cc=%.o)
H			=	-I.
CXXFLAGS	+=	-Wall -Wextra -Werror -std=c++98 -pedantic $(H)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) $^ -o $@

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
