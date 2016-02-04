//
// Created by Kwan Voong on 03/02/2016.
//

#include "Dvector.h"
#include <iostream>
#include <cstdlib>

/* ===== CONSTRUCTORS ===== */

/* --- Constructor with size and implicit initialisation --- */
Dvector::Dvector(int size, double init) {
    taille = size;
    if (taille == 0){
        return ;
    }

    pTab = new double[taille];
    for (int i = 0; i < size ; i++) {
        pTab[i] = init;
    }
}

/* --- Default constructor --- */
Dvector::Dvector() {
    taille = 0;
    pTab = new double[taille];
}

/* --- Deleter --- */
Dvector::~Dvector() {
    delete [] pTab;
}

/* --- Constructor by paste --- */
Dvector::Dvector(const Dvector & D) {
    taille = D.taille;
    if (taille == 0){
        return ;
    }

    pTab = new double[taille];
    for (int i = 0; i < taille ; i++) {
        pTab[i] = D.pTab[i];
    }

}

/* ==== METHODS ====*/

void Dvector::display(std::ostream &str) {
    for (int i = 0; i < taille ; i++) {
        str<<pTab[i]<<std::endl;
    }
}

void Dvector::fillRandomly(){
    double valeurAleatoire = 0;
    srand(time(NULL));
    for (int i = 0; i < taille; i ++){
        valeurAleatoire = rand();
        pTab[i] = valeurAleatoire;
    }
}
