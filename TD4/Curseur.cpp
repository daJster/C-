#include<cstdio>
#include<cstring>

#include "Curseur.hpp"

using C::Curseur;
using C::CurseurClassique;
using C::CurseurInverse;
using C::CurseurPas;

// CURSEUR 
Curseur::Curseur(const Chaine &ch, int start){
    _chaine = Chaine(ch);
    _position = start;
}

const char Curseur::operator*() const{
    return _chaine[_position];
}

unsigned int Curseur::getPosition() const {
    return _position;
}

const Chaine & Curseur::getChaine() const {
    return _chaine;
}


// CURSEUR CLASSIQUE
CurseurClassique::CurseurClassique(const Chaine &ch):Curseur(ch, 0){}

void CurseurClassique::operator++(){
    _position++;
}

void CurseurClassique::operator--(){
    _position--;
}

bool CurseurClassique::fini() const{
    return _position == _chaine.taille();
}

void CurseurClassique::debut(){
    _position = 0;
}   

void CurseurClassique::fin(){
    _position = _chaine.taille();
}

// CURSEUR INVERSE
CurseurInverse::CurseurInverse(const Chaine &ch):Curseur(ch, ch.taille()){}

void CurseurInverse::operator++(){
    _position--;
}

void CurseurInverse::operator--(){
    _position++;
}

bool CurseurInverse::fini() const{
    return _position == 0;
}

void CurseurInverse::debut(){
    _position = _chaine.taille();
}   

void CurseurInverse::fin(){
    _position = 0;
}


// CURSEUR PAS
CurseurPas::CurseurPas(const Chaine &ch, unsigned int start, unsigned int end, int hop):Curseur(ch, start){
    _start = _position;
    _end = end;
    _hop = hop;
}

void CurseurPas::operator++(){
    _position += _hop;
}

void CurseurPas::operator--(){
    _position -= _hop;
}

bool CurseurPas::fini() const{
    return _position == _end;
}

void CurseurPas::debut(){
    _position = _start;
}   

void CurseurPas::fin(){
    _position = _end;
}