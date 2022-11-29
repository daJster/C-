#include "hdr/chaine.hpp"
#include <iostream>

// exercice 3
void annexe1(Chaine s){
    // Ici c'est une copie
    std::cout << "Annexe 1 avec copie" << std::endl;
}


void annexe2(const Chaine &s){
    std::cout << "Annexe 2 sans copie" << std::endl;
}

int main(){

    Chaine ch{}; // nouvelle instance => pas d'allocation dynamique
    Chaine *ptr = nullptr; // never Chaine *ptr -- pointer -> nulptr equivalent à NULL

    // pas d'allocation et pas d'instance (le pointeur est vide)


    ptr = new Chaine(); // allocation dynamique

    std::cout << "taille de ch :" << ch.taille() << std::endl;

    if (ptr){
        std::cout << "Taille de * ptr :" << ptr->taille() << std::endl;
    }

    std::cout << std::endl << "ptr :" << ptr << std::endl;

    delete ptr;

    Chaine str((char *)"Hello\0");
    
    // Chaine str{};
    annexe1(str);
    annexe2(str);
    std::cout << "main" << std::endl;

    return 0;
}