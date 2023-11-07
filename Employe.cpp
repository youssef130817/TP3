#include <iostream>
#include "Employe.hpp"
using namespace std;
void Employe::affiche()
{
    cout << endl
         << Nom << "  " << Prenom << "    " << Age << "   " << salaire << endl;
}
Employe::Employe(string nom, string prenom, int age, int Salaire) : individu(nom, prenom, age)
{
    salaire = Salaire;
}
Employe::Employe(const Employe &obj) : individu(obj)
{
    this->salaire = obj.salaire;
}