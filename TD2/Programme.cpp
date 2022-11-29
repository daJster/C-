#include <stdio.h>
#include <iostream>

#include "Chaine.hpp"

void annexe(const Chaine &s) {
  // std::cout << "check" << std::endl;
  std::printf("taille est : %d \n", s.taille());
}

int main() {

  // ex 1-2
  // Chaine chaine("Une petite");
  // annexe(chaine);

  // ex 3-4
  // Chaine s1("Une chaine");
  // Chaine s2(s1); // shallow copy
  // Chaine s3 = s1; // same

  // s1.debug();
  // s2.debug();
  // s3.debug();

  // ex 6
  // Chaine c1("Une chaine");
  // Chaine c2("Coucou");

  // c1 = c2;

  // c1.debug();


  // ex 7
  // Chaine ch("Une chaine");

  // for (int i = 0; i < (int)ch.taille(); i++){
  //   std::printf("%c\n", ch[i]);
  // }


  // ex 8

  // Chaine str("Une chaine");

  // std::printf("%s \n", (const char *) str);


  // ex 9

  Chaine one("Hello");
  Chaine two(" World");
  Chaine res = one + two;

  one.debug();
  two.debug();
  res.debug();

}
