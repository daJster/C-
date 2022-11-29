#include<cstring>

#include "Chaine.hpp"
#include "Etudiant.hpp"

#include <memory>



namespace enseirb
{
    Etudiant::Etudiant(const Chaine & nom, const Chaine & filiere, const Chaine & enseignement):Personne(nom), _filiere(filiere), _enseignement(enseignement){
    }

    Chaine Etudiant::filiere() const{
        return _filiere;
    }
    
    Chaine Etudiant::enseignement() const{
        return _enseignement;
    }
    
    const Chaine &Etudiant::nom() const{
        return Chaine("Eleve :") + Personne::nom();
    }

    void Etudiant::setEnseignement(const Chaine & enseignement) { 
        _enseignement = enseignement;
    }
    
} // namespace enseirb
