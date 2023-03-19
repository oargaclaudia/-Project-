//
// Created by Asus on 22.05.2022.
//

#ifndef PROIECT_SDA_314_SERVICE_H
#define PROIECT_SDA_314_SERVICE_H
#include "Repository.h"
class Service {
private:
    Repository repository;
public:
    Service();
    explicit Service(const Repository& repo);
    ~Service() = default;
    Service& operator=(const Service&service);

    Array<Friendship> getRelatiiPrietenie();
    Array<Message> getMesaje();
    OrderedSet<User> getUtilizatori();


    int adaugaUtilizator(const string &id,const string &username,const string &nume,const string &prenume,const string &email,const string &parola,const string &blibliografie,const string &inf_suplimentare);
    int stergereUtilizator(string &id, string &username, string &nume, string &prenume, string &email, string &parola, string &blibliografie, string &inf_suplimentare);
    int gasesteUtilizator(string &id, string &username, string &nume, string &prenume, string &email, string &parola, string &blibliografie, string &inf_suplimentare);

    int adaugaPrietenie(const string &id,const string &username,const string &nume,const string &prenume,const string &email,const string &parola,const string &blibliografie,const string &inf_suplimentare,const string &id2,const string &username2,const string &nume2,const string &prenume2,const string &email2,const string &parola2,const string &blibliografie2,const string &inf_suplimentare2);
    int stergerePrietenie(string &id, string &username, string &nume, string &prenume, string &email, string &parola, string &blibliografie, string &inf_suplimentare,string &id2, string &username2, string &nume2, string &prenume2, string &email2, string &parola2, string &blibliografie2, string &inf_suplimentare2);

    int adaugaMesaj(const string &id,const string &username,const string &nume,const string &prenume,const string &email,const string &parola,const string &blibliografie,const string &inf_suplimentare,const string &id2,const string &username2,const string &nume2,const string &prenume2,const string &email2,const string &parola2,const string &blibliografie2,const string &inf_suplimentare2,const string &text);
    int stergereMesaj(string &text, string &id, string &username, string &nume, string &prenume, string &email, string &parola, string &blibliografie, string &inf_suplimentare,string &id2, string &username2, string &nume2, string &prenume2, string &email2, string &parola2, string &blibliografie2, string &inf_suplimentare2);
    int modificaMesaj(string &textVechi, string &id, string &username, string &nume, string &prenume, string &email, string &parola, string &blibliografie, string &inf_suplimentare,string &id2, string &username2, string &nume2, string &prenume2, string &email2, string &parola2, string &blibliografie2, string &inf_suplimentare2, string &textNou);

};



#endif //PROIECT_SDA_314_SERVICE_H
