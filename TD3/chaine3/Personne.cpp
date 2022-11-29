#include<cstring>

#include "Personne.hpp"
#include "Chaine.hpp"

#include <memory>

namespace enseirb{

    Personne::Personne(const Chaine & ch) : _nom{ch} {
    printf("Personne::Personne()\n");
    }

    const Chaine &Personne::nom() const {
    return _nom;
    }

    void Personne::afficheNom() const {
       Personne::nom().afficheChaine();
    }
}