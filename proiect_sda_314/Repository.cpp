//
// Created by Asus on 22.05.2022.
//

#include "Repository.h"
Repository::Repository() {

}
Repository::Repository(const Repository &r) {
    this->utilizatori=r.utilizatori;
    this->mesaje = r.mesaje;
    this->prietenie = r.prietenie;
}

Repository &Repository::operator=(const Repository &r) {
    if (this!=&r)
    {this->utilizatori=r.utilizatori;
        this->mesaje=r.mesaje;
        this->prietenie=r.prietenie;
    }
    return *this;
}



Array<Message> &Repository::getMesaje() {
    return this->mesaje;
}

Array<Friendship> &Repository::getPrieteni() {
    return this->prietenie;
}

OrderedSet<User> &Repository::getUtilizatori() {
    return this->utilizatori;
}

int Repository::adaugaUtilizator(const User &u) {
    int verif;
    verif = this->getUtilizatori().adaugare(u);
    return verif;
}

int Repository::stergeUtilizator(User &u) {
    int verif;
    verif = this->getUtilizatori().stergere(u);
    return verif;
}

int Repository::cautaUtilizator(User &u) {
    return this->utilizatori.find(u);
}

int Repository::stergeMesaj(Message &m) {
    int verif;
    verif = this->mesaje.verifDelete(m);
    return verif;
}

int Repository::stergePrietenie(Friendship &f) {
    int verif;
    verif = this->prietenie.verifDelete(f);
    return verif;
}

int Repository::modificaMesaj(Message &m, string& noul_text) {
    Message mesajNou = Message(m.getSender(), m.getReceiver(), noul_text);
    return this->mesaje.verifUpdate(m, mesajNou);
}

int Repository::adaugaMesaj(Message &m) {
    int f1 = this->utilizatori.find(m.getSender());
    int f2 = this->utilizatori.find(m.getReceiver());
    if (f1==0)
        return 0;
    if (f2==0)
        return 0;
    this->mesaje.add(m);
    return 1;
}

int Repository::adaugaPrietenie(Friendship &f) {
    if (this->prietenie.findElement(f)!=-1)
        return 0;
    else
    {
        int prieten1,prieten2;
        prieten1= this->utilizatori.find(f.getPrimulPrieten());//vezi daca gaseste primul prieten
        prieten2 = this->utilizatori.find(f.getAlDoileaPrieten());
        if(prieten1 == 0)
            return 0;
        if (prieten2 ==0)
            return 0;
        this->prietenie.add(f);
        return 1;

    }
}