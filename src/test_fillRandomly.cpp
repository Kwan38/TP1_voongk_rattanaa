//
// Created by rattanaa on 08/02/16.
//

#include <iostream>
#include "Dvector.h"

using namespace std;

int main(){
    cout<<"Test pour la méthode fillRandomly d'un vecteur de taille 6"<<endl;
    Dvector d2 = Dvector(6);
    d2.fillRandomly();
    d2.display(cout);
}