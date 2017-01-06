NAME = do_op
SRC = do_op.c
OBJ = $(SRC:.c=.o)

all: $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -fR *~ \#*\#
	rm -fR $(OBJ)

fclean:
	rm -fR $(NAME)
