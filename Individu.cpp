#include <iostream>
#include "Individu.hpp"
using namespace std;
individu::individu(string nom, string prenom, int age)
{
    this->Nom = nom;
    this->Prenom = prenom;
    this->Age = age;
}
individu::individu(const individu &obj)
{
    this->Nom = obj.Nom;
    this->Prenom = obj.Prenom;
    this->Age = obj.Age;
}
string individu::nom()
{
    return Nom;
}
string individu::prenom()
{
    return Prenom;
}
int individu::age()
{
    return Age;
}
void individu::affiche()
{
    cout << endl
         << Nom << "  " << Prenom << "    " << Age << endl;
}