NAME	= half_str
SRC	= half_str.c
OBJ	= $(SRC:.c=.o)

all: $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -fR *~ \#*\#
	rm -fR $(OBJ)

fclean:
	rm -fR $(NAME)

re: clean fclean all
