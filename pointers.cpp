
#include <iostream>
using namespace std;

int main
{
    /*
    int *pointeur(0);

    double *pointeurA(0);
    //Un pointeur qui peut contenir l'adresse d'un nombre à virgule
    
    unsigned int *pointeurB(0);
    //Un pointeur qui peut contenir l'adresse d'un nombre entier positif
    
    string *pointeurC(0);
    //Un pointeur qui peut contenir l'adresse d'une chaîne de caractères
    
    vector<int> *pointeurD(0);
    //Un pointeur qui peut contenir l'adresse d'un tableau dynamique de nombres entiers
    
    int const *pointeurE(0);
    //Un pointeur qui peut contenir l'adresse d'un nombre entier constant
    */
    
    int ageUtilisateur(16);
    //Une variable de type int
    int *ptr(0);
    //Un pointeur pouvant contenir l'adresse d'un nombre entier

    ptr = &ageUtilisateur;
    //On met l'adresse de 'ageUtilisateur' dans le pointeur 'ptr'

    return 0;
}