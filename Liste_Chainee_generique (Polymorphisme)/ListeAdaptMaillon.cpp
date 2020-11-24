#include <iostream>
#include "ListeAdapt.hpp"

using namespace std;

ListeAdaptMaillon::ListeAdaptMaillon(Vehicule *val): _suiv(NULL), _elmt(val)
{
}

// Constructeur de copie
ListeAdaptMaillon::ListeAdaptMaillon(ListeAdaptMaillon &lam)

{
    _suiv = lam._suiv;
    _elmt = lam._elmt;
}

// Accesseurs
ListeAdaptMaillon* ListeAdaptMaillon::get_suiv(void) const
{
    return _suiv;
}

Vehicule* ListeAdaptMaillon::get_elmt(void) const
{
    return _elmt;
}

// Mutateurs
void ListeAdaptMaillon::set_suiv(ListeAdaptMaillon* suiv)
{
    _suiv = suiv;
}

void ListeAdaptMaillon::set_elmt(Vehicule *elmt)
{
    _elmt = elmt;
}

ListeAdaptMaillon::~ListeAdaptMaillon()
{
}