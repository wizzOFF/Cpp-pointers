/*
#include <iostream>
using namespace std;

int main
{
    
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
    
    
    int ageUtilisateur(16);
    //Une variable de type int
    int *ptr(0);
    //Un pointeur pouvant contenir l'adresse d'un nombre entier

    ptr = &ageUtilisateur;
    //On met l'adresse de 'ageUtilisateur' dans le pointeur 'ptr'

    cout << "L'adresse de 'ageUtilisateur' est : " << &ageUtilisateur << endl;
    cout << "La valeur de pointeur est : " << ptr << endl;

    cout << "La valeur est :  " << *ptr << endl;
    
    
    int *pointeur(0);
    pointeur = new int;
    
    *pointeur = 2;  //On accède à la case mémoire pour en modifier la valeur

    delete pointeur;    //On libère la case mémoire
    pointeur = 0;       //On indique que le pointeur ne pointe plus vers rien

    return 0;
    
}
*/


#include <iostream>
using namespace std;

int main()
{
   int* pointeur(0);
   pointeur = new int;

   cout << "Quel est votre age ? ";
   cin >> *pointeur;
   //On écrit dans la case mémoire pointée par le pointeur 'pointeur'

   cout << "Vous avez " << *pointeur << " ans." << endl;
   //On utilise à nouveau *pointeur
    delete pointeur;   //Ne pas oublier de libérer la mémoire
   pointeur = 0;       //Et de faire pointer le pointeur vers rien

   return 0;
}