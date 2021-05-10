main : main.o libque.a
	g++ -o main main.o -L./-libque

main.o : main.cpp
	g++ -c -o main.o main.cpp

libque.a : que.o
	ar rc libque.a que.o

que.o : que.cpp
	g++ -c -o que.o que.cpp

clean :
	rm *.o *.a main