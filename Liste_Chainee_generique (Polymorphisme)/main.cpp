#include <iostream>
#include "Car.hpp"
#include "ListeAdapt.hpp"
#include "ListeAdaptMaillon.hpp"

using namespace std;

int main()
{
    ListeAdapt *l1 = new ListeAdapt();

    

    l1->empiler(new Voiture(1500, 3,4,"Voiture 1"));
    l1->empiler(new Moto(1200,2,"Moto 1"));
    l1->empiler(new Voiture(5000, 5,4,"Voiture 2"));
    l1->empiler(new Voiture(5000, 7,6,"Voiture 3"));

    l1->get_first()->get_elmt()->;
    l1->depiler();
    l1->depiler();
    l1->afficher();

    return 0;
}