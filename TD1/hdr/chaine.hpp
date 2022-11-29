#pragma once // supporté à partir de C++

// #ifndef 

#include <iostream>

class Chaine{

    public : 
        unsigned int taille() const;
        Chaine();
        Chaine(char *);
        ~Chaine();
        char get(unsigned int) const;

    private:
        unsigned int _taille;
        char * _donnees;
};