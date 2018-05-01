wykon: main.o klasapom.o test.o
	g++ main.o klasapom.o test.o -o wykon

klasapom.o: klasapom.cpp klasapom.hpp
	g++ -Wall -c klasapom.cpp -o klasapom.o

main.o: main.cpp lib.hpp test.hpp klasapom.hpp
	g++ -Wall -c main.cpp -o main.o

test.o: test.cpp lib.hpp klasapom.hpp
	g++ -Wall -c test.cpp -o test.o

.PHONY: clean

clean:
	rm -f main.o test.o klasapom.o wykon
run:
	./wykon