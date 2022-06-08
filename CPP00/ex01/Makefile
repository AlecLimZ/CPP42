NAME	=	PhoneBook
SRC		=	main.cpp
CC		= 	c++
CFLAGS	=	-Wall -Wextra -Werror
STD		=	-std=c++98

all	:	$(NAME)

$(NAME):	$(SRC)
		$(CC) $(CFLAGS) $(STD) $^ -o $@

clean:
		rm -rf $(NAME)

fclean: clean

re:	fclean clean all

.PHONY:	all fclean clean re
