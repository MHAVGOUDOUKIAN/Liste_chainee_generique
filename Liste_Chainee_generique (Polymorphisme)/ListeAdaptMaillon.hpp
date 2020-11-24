#ifndef LISTEADAPTMAILLON_HPP_INCLUDED
#define LISTEADAPTMAILLON_HPP_INCLUDED
#include "Car.hpp"

// Cette classe correspond au maillon que l'on place dans la liste chaînée
class ListeAdaptMaillon
{
    public:
    //  Constructeurs
        ListeAdaptMaillon(Vehicule *);
        ListeAdaptMaillon(ListeAdaptMaillon &);
    
    //  Setters et Getters
        ListeAdaptMaillon *get_suiv(void) const;
        virtual Vehicule* get_elmt(void) const;
        void set_suiv( ListeAdaptMaillon*);
        void set_elmt(Vehicule *);
    
    //  Destructeur
        virtual ~ListeAdaptMaillon();

    private:
        ListeAdaptMaillon* _suiv;
        Vehicule *_elmt;

};

#endif //LISTEADAPTMAILLON_HPP_INCLUDED