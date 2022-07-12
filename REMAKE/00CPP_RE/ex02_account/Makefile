NAME	=	account
SRC		=	*.cpp
OBJ		=	*.o
CC		= 	c++ -Wall -Wextra -Werror -fsanitier=address
HEAD	=	-I.

all:		$(NAME)

$(OBJ):		$(SRC)
			$(CC) $(HEAD) -c $^

$(NAME):	$(OBJ)
			$(CC) $^ -o $@

clean:
			rm -rf $(NAME)

fclean:		clean
			rm -rf $(OBJ)

re:			fclean all

.PHONY:		all clean fclean re
