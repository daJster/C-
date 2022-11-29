#include "hdr/chaine.hpp"
#include <iostream>
#include <cstring>


// using std::cout
unsigned int Chaine::taille() const {
    return _taille;
}

Chaine::Chaine(): _taille{0} ,_donnees {nullptr}{
    std::cout << "construction de Chaine" << std::endl;
}


Chaine::Chaine(char *str): _taille{(unsigned int) strlen(str)}, _donnees{new char(_taille + 1)} {
   strcpy(_donnees, str); 
}

Chaine::~Chaine(){
    std::cout << "destruction de Chaine" << std::endl;
    std::cout << "this :" << this << std::endl;
    delete _donnees; // destruction de donnees
    _donnees = nullptr;
}

char Chaine::get(unsigned int i) const {

    if (i < 0){
        throw std::runtime_error("out of bound");
    }

    if (i < _taille && _donnees){
        return *(_donnees);
    }

    return '\0';
}