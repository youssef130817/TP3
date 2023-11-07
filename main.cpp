#include <iostream>
#include "Employe.hpp"
using namespace std;
int main()
{
    cout << "tester constructeur individu :      ";
    individu obj1("youssef", "kassimi", 24);
    obj1.affiche();
    individu obj2(obj1);
    cout << "tester constructeur Employe :      ";
    Employe obj3("soufiane", "lamhoubi", 23, 8000);
    Employe obj4(obj3);

    obj2.affiche();
    obj3.affiche();
    obj4.affiche();

    return 1;
}