CXXFLAGS=-Wall -g -O0

prog: Chaine.o Programme.o 
	g++ ${CXXFLAGS} $^ -o $@

Programme.o: Chaine.hpp

clean:
	rm -f *.o prog