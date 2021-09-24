target = execute

FILE = main.c

func = ./srcs/add.c  ./srcs/mul.c

all:	MLIB
	gcc $(FILE) -L. -lft -o $(target)

clean:
	/bin/rm -f *.a
	/bin/rm -f ./srcs/*.o

fclean:	clean
	/bin/rm -f $(target)

re:fclean all

MOBJ:
	gcc -c -Wall -Wextra -Werror $(func)
	mv ./*.o  ./srcs

MLIB:  MOBJ
	ar -rcs libft.a ./srcs/*.o
