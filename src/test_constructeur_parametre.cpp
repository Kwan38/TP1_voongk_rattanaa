//
// Created by rattanaa on 08/02/16.
//

#include <iostream>
#include "Dvector.h"

using namespace std;

int main(){
    cout<<"Constructeur en entrant en parametre la dimension sans parametre d'initialisation"<<endl;
    Dvector d2 = Dvector(6);
    cout<<"On a un vecteur de taille "<<d2.size()<<endl;
    d2.display(cout);
    cout<<endl;

    cout<<"Constructeur en entrant en parametre la dimension avec parametre d'initialisation"<<endl;
    Dvector d3 = Dvector(4,1.54);
    cout<<"On a un vecteur de taille "<<d3.size()<<endl;
    d3.display(cout);
    cout<<endl;
    return 0;
}