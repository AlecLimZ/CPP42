NAME	=	main
SRC		=	main.cpp Fixed.cpp
OBJ		=	*.o
CC		=	c++ -Wall -Wextra -Werror
HEADER	=	-I.

all:		$(NAME)

$(OBJ):		$(SRC)
			$(CC) $(HEADER) -c $^

$(NAME):	$(OBJ)
			$(CC) $^ -o $@

test:
			$(CC) $(HEADER) -c Fixed.cpp test.cpp
			$(CC) $(OBJ) -o test

clean:
			rm -rf $(NAME) test

fclean:		clean
			rm -rf $(OBJ)

re:			fclean all

.PHONY:		all clean fclean re
