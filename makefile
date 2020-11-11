CC = gcc
FLAGS = -Wall -g

.PHONY : mymaths mymathd all clean

all : mains maind

basicMath.o : myMath.h basicMath.c
	$(CC) $(FLAGS) -fPIC -c basicMath.c

power.o : myMath.h power.c
	$(CC) $(FLAGS) -fPIC -c power.c

main.o : myMath.h main.c
	$(CC) $(FLAGS) -c main.c

libmyMath.a : power.o basicMath.o
	ar rcs libmyMath.a power.o basicMath.o

mymaths : libmyMath.a

libmyMath.so : power.o basicMath.o
	$(CC) $(FLAGS) -shared power.o basicMath.o -o libmyMath.so

mymathd : libmyMath.so

mains : main.o libmyMath.a
	$(CC) $(FLAGS) main.o libmyMath.a -o mains

maind : main.o libmyMath.so
	$(CC) $(FLAGS)  main.o ./libmyMath.so -o maind
clean : 
	rm *.o *.a *.so mains maind