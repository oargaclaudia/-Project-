//
// Created by Asus on 21.05.2022.
//

#include "Friendship.h"

//definim constructorul fara parametrii, adica cel implicit
Friendship::Friendship() = default;

//definim constructorul cu parametrii
Friendship::Friendship(User &prieten1, User &prieten2) {
    this->prieten1 = prieten1;
    this->prieten2 = prieten2;
}

//destructorul
Friendship::~Friendship() = default;

//getterii
User Friendship::getPrimulPrieten() {
    return this->prieten1;
}

User Friendship::getAlDoileaPrieten() {
    return this->prieten2;
}

//setterii
void Friendship::setPrimulPrieten(const User &prieten1) {
    this->prieten1 = prieten1;
}

void Friendship::setAlDoileaPrieten(const User &prieten2) {
    this->prieten2 = prieten2;
}

//operatorul de egalitate
bool Friendship::operator==(const Friendship &m)  {
    if ((this->prieten1 == m.prieten1 && this->prieten2 == m.prieten2) || (this->prieten1 == m.prieten2 && this->prieten2 == m.prieten1))
        return true;

    return false;
}

//operatorul de atribuire
Friendship &Friendship::operator=(const Friendship &e) {
    if (this != &e) {
        this->setPrimulPrieten(e.prieten1);
        this->setAlDoileaPrieten(e.prieten2);
    }
    return *this;
}

//operatorul !=
bool Friendship::operator!=(const Friendship &m) {
    return !(*this==m);
}

//operatorul de afisare
ostream &operator<<(ostream &os, Friendship prietenie) {
    os<<"Primul prieten: " << prietenie.prieten1;
    os<<"Al doilea prieten: "<<prietenie.prieten2;
    return os;
}