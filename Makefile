CXXFLAGS=-Wall -Wextra -O0 -g -std=c++11

main: main.o Character.o
	g++ main.o Character.o -o main

main.o: main.cpp Character.h
	g++ -o main.o -c ${CXXFLAGS} main.cpp

Character.o: Character.cpp Character.h
	g++ -o Character.o -c ${CXXFLAGS} Character.cpp


clean: 
	rm main main.o Character.o
