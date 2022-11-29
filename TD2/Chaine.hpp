#ifndef CHAINE_HPP
#define CHAINE_HPP

#include <cstring>

class Chaine {
 private:
  char* _donnees;
  unsigned int _taille;

 public:

  // constructors
  Chaine();
  void build(const Chaine &);
  Chaine(const Chaine &);
  Chaine(const char*);

  // destructor
  ~Chaine();

  // methods
  unsigned int taille() const;
  char get(unsigned int i) const;
  void debug() const;

  // operators
  const Chaine& operator=(const Chaine &);
  char operator[](unsigned int) const;
  const Chaine& operator+(const Chaine &);
};

#endif
