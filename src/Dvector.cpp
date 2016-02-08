//
// Created by Kwan Voong on 03/02/2016.
//

#include "Dvector.h"
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;

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

/* --- Constructor by parsing a file --- */
Dvector::Dvector( std::string inputFile){
    std::ifstream fichier;//(std::string, ios::in);//on ouvre le fichier en lecture
    fichier.open(inputFile.c_str(),ifstream::in);
    if(fichier.is_open()){
        //Récuperer le nombre de ligne pour initialiser la taille du tableau
        int nombreLigne = 0; // on va garder en mémoire le nombre de ligne du fichier pour ensuite avoir la taille du vecteur
        string s;  // déclaration d'une chaîne qui contiendra la ligne lue
        while(getline(fichier, s)){
            nombreLigne++;
        }
        taille = nombreLigne; // on a la taile du vecteur
        pTab = new double[taille];

        //Prendre les données des lignes pour les rentrer en parametre du vecteur
        //On retour en début de fichier
        fichier.clear();
        fichier.seekg(0, ios::beg);
        int i = 0;
        while(getline(fichier, s))  // tant que l'on peut mettre la ligne
        {
           pTab[i] = atof(s.c_str());
            i++;
        }
    }else{
        taille = 0;
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
        valeurAleatoire = ((double) rand() / (RAND_MAX));;
        pTab[i] = valeurAleatoire;
    }
}

int Dvector::size(){
    return taille;
}