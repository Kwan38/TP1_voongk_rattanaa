//
// Created by Kwan Voong on 03/02/2016.
//

#ifndef TP1_DVECTOR_H
#define TP1_DVECTOR_H



#include <iosfwd>

class Dvector {

    private:
    /* Fields */
        double *pTab;
        int taille;

    public:
    /* Constructors */
        /* Default constructor */
        Dvector();
        /* Constructor with size and implicit initialisation */
        Dvector(int size, double init = 0);
        /* Deleter */
        ~Dvector();
        /* Constructor by paste */
        Dvector(const Dvector & D);

    /* Methods */
    void display(std::ostream& str);
};


#endif //TP1_DVECTOR_H
