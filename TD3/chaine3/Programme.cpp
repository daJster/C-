#include <iostream>

#include "Chaine.hpp"
#include "Personne.hpp"
#include "Etudiant.hpp"

using enseirb::Chaine;

Chaine annexe(Chaine u, Chaine t) {
  return u + t;
}


void affiche(const Chaine &s){
  std::cout << "AFFICHE <";
  for(unsigned int i = 0; i < s.taille(); i++)
    std::cout << s[i];
  std::cout << ">" << std::endl;
}

int main(){
  // Chaine s("un texte long");
  // Chaine p("test");
  
  // //Chaine r = annexe(s, p);
  // Chaine r(annexe(s, p));


  enseirb::Personne p("jad");
  enseirb::Etudiant e("Jad", "info", "lmao");

  e.afficheNom();
  p.afficheNom();
  // affiche(r);
}
