main : main.o libstack.a
	g++ -o main main.o -L./-libstack

main.o : main.cpp
	g++ -c -o main.o main.cpp

libstack.a : stack.o
	ar rc libstack.a stack.o

stack.o : stack.cpp
	g++ -c -o stack.o stack.cpp

clean :
	rm *.o *.a main