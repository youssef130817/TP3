#include <iostream>
using namespace std;
class individu
{
protected:
    string Nom;
    string Prenom;
    int Age;

public:
    individu(string nom = "", string prenom = "", int age = 0);
    individu(const individu &);
    string nom();
    string prenom();
    void affiche();
    int age();
};