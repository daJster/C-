#ifndef ETUDIANT__HPP
#define ETUDIANT__HPP

#include "Personne.hpp"


namespace enseirb
{
    class Etudiant : public Personne{
        public:
            Etudiant(const Chaine &, const Chaine &, const Chaine &);

            Chaine filiere() const;
            Chaine enseignement() const;
            const Chaine &nom() const;

            void setEnseignement(const Chaine &) ;
        private: 
            Chaine _filiere, _enseignement;
    };

} // namespace enseirb


#endif