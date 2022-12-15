
SmartExample: SmartExample.o SmartPointer.o Chaine.o
	g++ -Wall -o SmartExample SmartExample.o SmartPointer.o Chaine.o


SmartExample.o: SmartExample.cpp SmartPointer.hpp 
	g++ -c SmartExample.cpp


SmartPointer.o: SmartPointer.cpp SmartPointer.hpp 
	g++ -c SmartPointer.cpp

Chaine.o: Chaine.cpp Chaine.hpp
	g++ -c Chaine.cpp

clean: 
	rm -f *.o SmartExample