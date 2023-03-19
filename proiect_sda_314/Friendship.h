//
// Created by Asus on 21.05.2022.
//

#ifndef PROIECT_SDA_314_FRIENDSHIP_H
#define PROIECT_SDA_314_FRIENDSHIP_H
#include "User.h"
using namespace std;
class Friendship {
private:
    //atributele clasei Prietenie
    User prieten1; //primul prieten implicat in relatia de prietenie (de tip User,clasa definita anterior)
    User prieten2; //al doilea prieten implicat in relatia de prietenie (de tip User,clasa definita anterior)

public:
    Friendship(); //constructor fara parametrii
    Friendship(User &prieten1, User &prieten2); //constructor cu parametrii
    ~Friendship(); //destructor
    User getPrimulPrieten(); //getter pt prima persoana implicata in relatia de prietenie
    User getAlDoileaPrieten(); //getter pt a doua persoana implicata in relatia de prietenie(se va returna ceva de tip User)
    void setPrimulPrieten(const User& prieten1); //setter pt prima persoana implicata in relatia de prietenie
    void setAlDoileaPrieten(const User& prieten2); //setter pt a doua persoana implicata in relatia de prietenie
    Friendship& operator=(const Friendship&); //operatorul de atribuire
    bool operator==(const Friendship& m); //operatorul de egalitate
    bool operator!=(const Friendship& m); //operatorul !=
    friend ostream& operator<<(ostream& os, Friendship prietenie); //operatorul de afisare

};



#endif //PROIECT_SDA_314_FRIENDSHIP_H
