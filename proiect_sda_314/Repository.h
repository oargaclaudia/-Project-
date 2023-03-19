//
// Created by Asus on 22.05.2022.
//

#ifndef PROIECT_SDA_314_REPOSITORY_H
#define PROIECT_SDA_314_REPOSITORY_H
#include "User.h"
#include "Message.h"
#include "Friendship.h"
#include "Array.h"
#include "OrderedSet.h"

class Repository {
private:
    OrderedSet<User> utilizatori;
    Array<Friendship> prietenie;
    Array<Message> mesaje;
public:
    //definim constructor fara parametrii
    Repository();
    //copiere
    Repository(const Repository &r);
    //getteri
    OrderedSet<User>& getUtilizatori();
    Array<Friendship>& getPrieteni();
    Array<Message>& getMesaje();

    //operatii de tip CRUD pt entitatea Utilizator
    int adaugaUtilizator(const User &u);
    int stergeUtilizator(User &u);
    int cautaUtilizator(User &u);

    //operatii de tip CRUD pt entitatea Prietenie
    int adaugaPrietenie(Friendship &f);
    int stergePrietenie(Friendship &f);

    //operatii de tip CRUD pt entitatea Mesaj
    int adaugaMesaj(Message &m);
    int stergeMesaj(Message &m);
    int modificaMesaj(Message &m, string &noul_text);


    //operatorul de atribuire
    Repository& operator=(const Repository &r);
};



#endif //PROIECT_SDA_314_REPOSITORY_H
