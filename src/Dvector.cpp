
#include "Dvector.h"
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;


/*!
 * \file Dvector.cpp
 * \brief Implémentation des méthodes et constructeurs de Dvector.h
 * \author voongk-rattanaa
 *
 */


/* ===== CONSTRUCTORS ===== */

/* --- Constructor with size and implicit initialisation --- */
Dvector::Dvector(int size, double init) {
    cout<<"On entre dans le constructeur de Dvector avec paramètres taille et initialisation implicite"<<endl;
    taille = size;
    if (taille == 0){
        return ;
    }

    pTab = new double[taille];
    for (int i = 0; i < size ; i++) {
        pTab[i] = init;
    }
    cout<<"On sort du constructeur de Dvector avec paramètres taille et initialisation implicite"<<endl;
}

/* --- Default constructor --- */
Dvector::Dvector() {
    cout<<"On entre dans le constructeur par défaut de Dvector"<<endl;
    taille = 0;
    pTab = new double[taille];
    cout<<"On sort du constructeur par défaut de Dvector"<<endl;
}

/* --- Deleter --- */
Dvector::~Dvector() {
    cout<<"On entre dans le destructeur de Dvector "<<endl;
    delete [] pTab;
    cout<<"On sort du destructeur de Dvector "<<endl;
}

/* --- Constructor by paste --- */
Dvector::Dvector(const Dvector & D) {
    cout<<"On entre dans le constructeur par copie de Dvector "<<endl;
    taille = D.taille;
    if (taille == 0){
        return ;
    }

    pTab = new double[taille];
    for (int i = 0; i < taille ; i++) {
        pTab[i] = D.pTab[i];
    }
    cout<<"On sort du constructeur par copie de Dvector "<<endl;
}

/* --- Constructor by parsing a file --- */
Dvector::Dvector( std::string inputFile){
    cout<<"On entre dans le constructeur de Dvector avec paramètre un fichier en lecture"<<endl;
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
        fichier.close();
    }else{
        taille = 0;
        pTab = new double[taille];
    }
    cout<<"On sort du constructeur de Dvector avec paramètre un fichier en lecture"<<endl;
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