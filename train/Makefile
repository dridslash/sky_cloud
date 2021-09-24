target = objects/hello.c

target2 = objects/*.o

all: mlib

mobj:
	gcc -c -Wall -Wextra -Werror ${target}
	mv *.o  ./objects

mlib:   mobj
	ar -rcs libhello.a ${target2}
	gcc main.c -L -lhello -o main

clean:
	/bin/rm -f *.a
	/bin/rm -f ${target2}
	/bin/rm -f main

fclean:clean all
