//
// Created by Kwan Voong on 03/02/2016.
//

#include "Dvector.h"
#include <iostream>

//Demander au prof pour le caractere optionnel de init
Dvector::Dvector(int size, double init) {
    taille = size;
    pTab = new double[taille];
    for (int i = 0; i < size ; i++) {
        pTab[i] = init;
    }
}

Dvector::Dvector() {
    taille = 0;
    pTab = new double[taille];
}

Dvector::~Dvector() {
    delete [] pTab;
}

void Dvector::display(std::ostream &str) {
    for (int i = 0; i < taille ; i++) {
        str<<pTab[i]<<std::endl;
    }
}
