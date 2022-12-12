#ifndef CURSEUR_HPP
#define CURSEUR_HPP

#include "Chaine.hpp"


namespace C {
    class Curseur {
        protected:
            Chaine _chaine;
            unsigned int _position;
        public:
            Curseur(Chaine const &, int);
            virtual void operator++() = 0;
            virtual void operator--() = 0;
            const char operator*() const;
            virtual bool fini() const = 0;
            virtual void debut() = 0;
            virtual void fin() = 0;
            unsigned int getPosition() const;
            const Chaine & getChaine() const;
    };

    class CurseurClassique : public Curseur {
        public:
            CurseurClassique(const Chaine  &);
            virtual void operator++();
            virtual void operator--();
            virtual bool fini() const;
            virtual void debut();
            virtual void fin();
    };

    class CurseurInverse : public Curseur {
        public:
            CurseurInverse(const Chaine &);
            virtual void operator++();
            virtual void operator--();
            virtual bool fini() const;
            virtual void debut();
            virtual void fin();
    };

    class CurseurPas : public Curseur {
        protected:
            unsigned int _start;
            unsigned int _end;
            int _hop;
        public:
            CurseurPas(const Chaine &, unsigned int, unsigned int, int);
            virtual void operator++();
            virtual void operator--();
            virtual bool fini() const;
            virtual void debut();
            virtual void fin();
    };

}

#endif

