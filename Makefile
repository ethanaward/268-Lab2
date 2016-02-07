Lab2: main.o Node.o LinkedList.o
	g++ -g -std=c++11 -o Lab2 main.o Node.o LinkedList.o

main.o: main.cpp Node.h LinkedList.h
	g++ -g -std=c++11 -c main.cpp

Node.o: Node.h Node.cpp
	g++ -g -std=c++11 -c Node.cpp

LinkedList.o: LinkedList.h LinkedList.cpp
	g++ -g -std=c++11 -c LinkedList.cpp

clean: 
	rm *o Lab2
	clean done
