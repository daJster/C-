#include"SmartPointer.hpp"
#include "Chaine.hpp"
#include<cstdio>

void f(double *p){
  printf("%f\n",*p);
}

int main(){
  enseirb::SmartPointer<Chaine> p = new Chaine ("toto");
  enseirb::SmartPointer<Chaine> q = p;
  printf ("La chaine est : %s, de taille %d",(const char *)(*p) ,p->taille());
}
