/* 
 * Forme canonique d'une classe
 * Compilation:
 * g++ -Wall FormeCanonique.cpp -o prog
 */

#include<cstdio>

class Mere {
    int *val1;
public:
  // Constructeurs
  Mere(int p) {
    printf("constructeur Mere\n");
    val1 = new int(p);
  }
  Mere() {
    printf("constructeur sans parametre Mere\n");
    val1 = new int(-1);
    }

  // destructeur
  virtual ~Mere() {
    printf("destructeur Mere\n");
    delete val1;
  }

  // constructeur par recopie
  Mere(const Mere& m) {printf("constructeur recopie Mere\n");}

  // affectation
  const Mere& operator= (const Mere& m) {
    printf("affectation Mere\n"); 
    return *this;
  } 

  virtual void message(){
    printf("je suis la classe mère.\n");
  } // virtual pour le polymorphisme

};
 
class Fille : public Mere {
  int *val2;
  int *val2_cp;
public:
  Fille(int p) {
    printf("constructeur Fille\n");
    val2 = new int(p);
    val2_cp = new int(p);
    }; 

  virtual ~Fille() {
    printf("destructeur Fille\n");
    delete val2;
    delete val2_cp;
    }; 

  Fille(const Fille&) {printf("constructeur recopie Fille\n");}; 

  virtual void message(){
    printf("je suis la classe fille.\n");
  }

  //const Fille& operator= (const Fille& f) {printf("affectation Fille\n"); return *this;}; 
};

int main(){

  //Polymorphisme TD3
  Fille f2(5);
  Fille *f3 = new Fille(67);

  Fille *fille = new Fille(4);
  fille->message();

  Mere &mere = *fille;
  mere.message();

  delete &mere;
  delete f3;
}
