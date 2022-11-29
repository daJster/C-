#include<cstdio>

#include "Chaine.hpp"

Chaine::Chaine():_taille(0) {
  _donnees=NULL;
}

Chaine::Chaine(const char *s) {
  // Cas s==NULL a gerer plus tard.
  _taille = std::strlen(s);

  _donnees = new char[_taille + 1];
  std::strcpy(_donnees, s);
  
  std::printf("%s(%d): %s\n", __FILE__, __LINE__, __func__);
}

Chaine::Chaine(const Chaine &c){
  this->build(c);
  std::printf("%s(%d): %s\n", __FILE__, __LINE__, __func__);
}

void Chaine::build(const Chaine &c){
  _taille = c.taille();
  _donnees = new char[_taille + 1];
  std::strcpy(_donnees, c._donnees);
}

Chaine::~Chaine() {
  if (_donnees != NULL)
    delete[] _donnees;
  _donnees=NULL;
  std::printf("%s(%d): %s\n", __FILE__, __LINE__, __func__);
}

unsigned int Chaine::taille() const {
    return _taille;
}

char Chaine::get(unsigned int i) const{
  if (_donnees==NULL) return '\0';
  if (i>_taille) return '\0';
  return _donnees[i];
}

void Chaine::debug() const{
  if (_donnees != NULL)
    std::printf("donnees : %s \n", _donnees);
}

const Chaine & Chaine::operator=(const Chaine &c){
  this->~Chaine();
  this->build(c);
  return *this;
}

char Chaine::operator[](unsigned int i) const{
  return this->get(i);
}
  
const Chaine& Chaine::operator+(const Chaine &c){
  char* buffer = new char[this->taille() + c.taille() + 1];
  std::strcpy(buffer, this->_donnees);
  std::strcat(buffer,c._donnees);
  Chaine *ptr = new Chaine(buffer);
  delete[] buffer;
  return *ptr;
}
