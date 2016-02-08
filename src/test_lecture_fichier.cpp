//
// Created by rattanaa on 08/02/16.
//

#include <iostream>
#include "Dvector.h"

using namespace std;

int main(int argc, char *argv[]){
    char *fichier = argv[1];
    Dvector d5 = Dvector(fichier);
    d5.display(cout);

}