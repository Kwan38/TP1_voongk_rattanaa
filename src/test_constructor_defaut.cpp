//
// Created by rattanaa on 08/02/16.
//

#include <iostream>
#include "Dvector.h"

using namespace std;

int main(){
    cout<<"Constructeur par défaut"<<endl;
    Dvector d1 = Dvector();
    cout<<"On a un vecteur de taille "<<d1.size()<<endl;
    d1.display(cout);
    cout<<endl;

    return 0;
}
