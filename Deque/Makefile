MAIN_SRC = main
LIB_SRC = deque
LIB_OUT = libdeque.a

$(MAIN_SRC) : $(MAIN_SRC).o $(LIB_OUT)
	g++ -o $@ $@.o -L./-ldeque

%.o : %.cpp
	g++ -c -o $@ $^

$(LIB_OUT) : $(LIB_SRC).o
	ar rc $@ $^

clean :
	rm *.o *.a main