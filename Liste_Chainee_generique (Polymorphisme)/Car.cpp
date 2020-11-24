#include <iostream>
#include "Car.hpp"

using namespace std;

//
// VEHICULE
//

Vehicule::Vehicule(const int prix): _prix(prix)
{}

Vehicule::Vehicule(const Vehicule& v): _prix(v._prix)
{}

void Vehicule::afficher(void) const
{
    cout << "Prix du vehicule: " << _prix << endl;
}

int Vehicule::get_prix(void) const
{
    return _prix;
}

void Vehicule::set_prix(const int prix)
{
    _prix = prix;
}

Vehicule::~Vehicule()
{}

//
// VOITURE
//

Voiture::Voiture(const int prix, const int nb_portes, const int nb_roues, 
const std::string name): Vehicule(prix), _nb_portes(nb_portes), _nb_roues(nb_roues),
_name(name)
{}

Voiture::Voiture(const Voiture& v): Vehicule(v), _nb_portes(v._nb_portes),
_nb_roues(v._nb_roues), _name(v._name)
{}

int Voiture::get_nb_portes(void) const
{
    return _nb_portes;
}

void Voiture::set_nb_portes(const int nb_portes)
{
    _nb_portes= nb_portes;
}

int Voiture::get_nb_roues(void) const
{
    return _nb_roues;
}

void Voiture::set_nb_roues(const int nb_roues)
{
    _nb_roues = nb_roues;
}

std::string Voiture::get_name(void) const
{
    return _name;
}

void Voiture::set_name(const int name)
{
    _name = name;
}

void Voiture::afficher(void) const
{
    cout << _name; 
}


Voiture::~Voiture()
{
    cout << "Destruction d'une voiture" << endl;
}

//
// MOTO
//

Moto::Moto(const int prix, const int nb_roues, const std::string name): 
Vehicule(prix), _nb_roues(nb_roues), _name(name)
{}

Moto::Moto(const Moto& m): Vehicule(m), _nb_roues(m._nb_roues), _name(m._name)
{}

int Moto::get_nb_roues(void) const
{
    return _nb_roues;
}

void Moto::set_nb_roues(const int nb_roues)
{
    _nb_roues = nb_roues;
}

std::string Moto::get_name(void) const
{
    return _name;
}

void Moto::set_name(const int name)
{
    _name = name;
}

void Moto::afficher(void) const
{
    cout << _name;
}

Moto::~Moto()
{
    cout << "Destruction d'une moto" << endl;
}