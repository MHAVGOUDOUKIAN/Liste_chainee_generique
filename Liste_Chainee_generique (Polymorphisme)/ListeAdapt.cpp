#include <iostream>
#include "ListeAdapt.hpp"
#include "ListeAdaptMaillon.hpp"
#include "Car.hpp"

using namespace std;

ListeAdapt::ListeAdapt() : _first(NULL), _nb_maillon(0), _taille(-1)
{
    cout << "Création d'une nouvelle liste" << endl;
}

ListeAdapt::ListeAdapt(const int taille) : _first(NULL), _nb_maillon(0), _taille(taille)
{
    cout << "Création d'une nouvelle liste" << endl;
}

void ListeAdapt::empiler(Vehicule *val)
{
    ListeAdaptMaillon *newMaillon = new ListeAdaptMaillon(val);
    ListeAdaptMaillon *tempMaillon = NULL;
    tempMaillon = _first;

    if(_taille <= -1 || _nb_maillon < _taille) {
        if (_first == NULL) {
            set_first(newMaillon);
        }
        else {
            while (tempMaillon->get_suiv() != NULL) {
                tempMaillon = tempMaillon->get_suiv();
            }
            tempMaillon->set_suiv(newMaillon);
        }
        _nb_maillon ++;
    }
    else {
        cout << "Taille maximale atteinte"<< endl;
    }
    
    return;
}

void ajouter(const int indice, Vehicule *val)
{

}

void ListeAdapt::depiler()
{
    ListeAdaptMaillon *tempMaillon = NULL;
    tempMaillon = _first;

    if (_first != NULL) {
        if (_first->get_suiv() == NULL) {
            delete _first;
            _first = NULL;
        }
        else {
            while (tempMaillon->get_suiv()->get_suiv() != NULL) {
                tempMaillon = tempMaillon->get_suiv();
            }
            delete tempMaillon->get_suiv();
            tempMaillon->set_suiv(NULL);
        }
        _nb_maillon --;
    }
    else {
        cout << "Liste vide" << endl;
    }

    return;
}

void ListeAdapt::afficher(void) const
{
    ListeAdaptMaillon *affMaillon = NULL;
    affMaillon = _first;

    cout << "---DANS LA LISTE--- " << endl;
    while (affMaillon != NULL) {
        (affMaillon->get_elmt())->afficher();
        affMaillon = affMaillon->get_suiv();
        cout << " " << endl;
    }
    cout << "-------------------- " << endl;
    //=> Nombre d'elements: " << get_nb_maillon() << endl ;

    return;
}

void ListeAdapt::set_first(ListeAdaptMaillon *ptr)
{
    _first = ptr;
}

ListeAdaptMaillon* ListeAdapt::get_first(void) const
{
    return _first;
}

int ListeAdapt::get_nb_maillon(void) const
{
    return _nb_maillon;
}

ListeAdapt::~ListeAdapt()
{
    cout << "Destruction d'une liste !" << endl;
    ListeAdaptMaillon *tmp = NULL;
    ListeAdaptMaillon *toDelete = NULL;

    if (_first != NULL) {
        tmp = _first->get_suiv();
        while (tmp != NULL) {
            toDelete = tmp->get_suiv();
            delete tmp;
            tmp = toDelete;
        }
        delete _first;
    }
}