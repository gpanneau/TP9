CXXFLAGS=-Wall -Wextra -O0 -g -std=c++11

main: main.o Character.o Mario.o
	g++ main.o Character.o Mario.o -o main

main.o: main.cpp Character.h Mario.h
	g++ -o main.o -c ${CXXFLAGS} main.cpp

Character.o: Character.cpp Character.h
	g++ -o Character.o -c ${CXXFLAGS} Character.cpp

Mario.o: Mario.cpp Mario.h Character.h
	g++ -o Mario.o -c ${CXXFLAGS} Mario.cpp

clean: 
	rm main main.o Character.o
