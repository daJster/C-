#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include "Chaine.hpp"

namespace enseirb
{
    class Personne {
        public:
        Personne(const Chaine &);
        const Chaine &nom() const;
        void afficheNom() const;

        private:
        Chaine _nom;
    };
} // namespace enseirb

#endif