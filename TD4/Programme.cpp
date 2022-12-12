#include<cstdio>
#include <exception>
#include "Chaine.hpp"
#include "Curseur.hpp"

using C::Curseur;
using C::CurseurClassique;
using C::CurseurInverse;
using C::CurseurPas;

void affiche(const Chaine &s){
  std::puts("affiche:");
  for(unsigned int i = 0; i < s.taille(); i++)
    std::putchar(s[i]);
  std::puts("");
}

void afficheCurseur(Curseur & cr){
  printf("position : %d\n", cr.getPosition());
  cr.debut();
  while( ! cr.fini()){
    printf("%c",*cr);
    ++cr;
  }
  printf(" \n");
  cr.debut();
}

int main(int argc, char **argv){
  Chaine s("ami");
  Chaine p("ennemi");
  // Chaine copie=p;


  // affiche(s);
  // affiche(p);
  // affiche(copie);

  // p=s;
  
  // affiche(s);
  // affiche(p);
  // affiche(copie);

  printf("<<<<<<<<<<<<>>>>>>>>>>>>\n");

  CurseurClassique cc = CurseurClassique(s);
  CurseurInverse ci = CurseurInverse(p);
  CurseurPas cp = CurseurPas(p, 0, 6, 2);

  afficheCurseur(cc);
  afficheCurseur(ci);
  afficheCurseur(cp);

  try{
    throw "check error";
  } catch(char * e){
    printf("%s\n", e);
  }

}
