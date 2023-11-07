#include <iostream>
#include "Individu.hpp"
using namespace std;

class Employe : public individu
{
private:
    int salaire;

public:
    void affiche();
    Employe(string nom = "", string prenom = "", int age = 0, int salaire = 0);
    Employe(const Employe &);
};
