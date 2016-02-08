//
// Created by rattanaa on 08/02/16.
//
#include <iostream>
#include "Dvector.h"

using namespace std;

int main(){
    cout<<"Constructeur en entrant en parametre la dimension avec parametre d'initialisation"<<endl;
    Dvector d3 = Dvector(4,1.54);
    cout<<"On a un vecteur de taille "<<d3.size()<<endl;
    d3.display(cout);
    cout<<endl;

    cout<<"Constructeur par copie"<<endl;
    Dvector d4 = Dvector(d3);
    cout<<"On a un vecteur de taille "<<d4.size()<<endl;
    d4.display(cout);
    cout<<endl;


    return 0;
}

