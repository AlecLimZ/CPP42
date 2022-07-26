NAME		=	diamondtrap
SRC			=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJ			=	*.o
HEADER		=	-I.
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -pedantic -g -fsanitize=address -Wshadow -Wno-shadow

all:	$(NAME)

$(OBJ):		$(SRC)
			$(CXX) $(CXXFLAGS) $(HEADER) -c $^

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) $^ -o $@

clean:
			rm -rf $(NAME)

fclean:		clean
			rm -rf $(OBJ)

re:			fclean all

.PHONY:		all clean fclean re
