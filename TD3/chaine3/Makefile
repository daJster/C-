CC=g++
CPPFLAGS=-Wall -Wextra -std=c++0x

prog: Chaine.o Programme.o Personne.o Etudiant.o
	$(CC) $^ -o $@

Programme.o: Chaine.hpp

Chaine.o: Chaine.hpp

Personne.o: Personne.hpp

Etudiant.o: Etudiant.hpp

clean:
	rm -f *.o prog