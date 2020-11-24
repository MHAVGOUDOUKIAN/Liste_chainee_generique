#ifndef LISTEADAPT_HPP_INCLUDED
#define LISTEADAPT_HPP_INCLUDED
#include "ListeAdaptMaillon.hpp"

// Cette classe correspond à la liste chaînée qui contient le premier maillon _first
// qui lui permet d'accèder aux suivants
class ListeAdapt
{
    public:
    //  Constructeur
        ListeAdapt();
        ListeAdapt(const int);
   
        void empiler(Vehicule *);
        void ajouter(const int, Vehicule*);
        void depiler();
        // void supprimer(const int);
        void afficher(void) const;
    
    //  Setters et Getters
        void set_first(ListeAdaptMaillon*);
        ListeAdaptMaillon* get_first(void) const;
        int get_nb_maillon(void) const;

    //  Destructeur
        ~ListeAdapt();

    private:
        ListeAdaptMaillon *_first;
        int _nb_maillon;
        int _taille; // _taille > -1 => taille max = _taille // _taille <= -1 => taille max = pas de limite
};

#endif //LISTEADAPT_HPP_INCLUDED