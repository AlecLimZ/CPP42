NAME	=	main
SRC		=	main.cpp Fixed.cpp Point.cpp bsp.cpp
OBJ		=	*.o
CC		=	c++ -Wall -Wextra -Werror
HEADER	=	-I.

all:		$(NAME)

$(OBJ):		$(SRC)
			$(CC) $(HEADER) -c $^

$(NAME):	$(OBJ)
			$(CC) $^ -o $@

clean:
			rm -rf $(NAME)

fclean:		clean
			rm -rf $(OBJ)

re:			fclean all

.PHONY:		all clean fclean re
