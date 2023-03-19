//
// Created by Asus on 22.05.2022.
//


#
#include "Service.h"
Service::Service() {
}
Service::Service(const Repository &repo) {
    this->repository = repo;
}

Service &Service::operator=(const Service &service) {
    if (this!=&service)
        this->repository=service.repository;
    return *this;
}



OrderedSet<User> Service::getUtilizatori() {
    return this->repository.getUtilizatori();
}

Array<Message> Service::getMesaje() {
    return this->repository.getMesaje();
}

Array<Friendship> Service::getRelatiiPrietenie() {
    return this->repository.getPrieteni();
}

int
Service::adaugaUtilizator(const string &id, const string &username, const string &nume,const string &prenume,const string &email,const string &parola,
                          const string &blibliografie,const string &inf_suplimentare) {
    User u(id, username, nume, prenume, email, parola,
           blibliografie, inf_suplimentare);
    return this->repository.adaugaUtilizator(u);

}

int
Service::stergereUtilizator(string &id, string &username, string &nume, string &prenume, string &email, string &parola,
                            string &blibliografie, string &inf_suplimentare) {
    User u(id, username, nume, prenume, email, parola,
           blibliografie, inf_suplimentare);
    return this->repository.stergeUtilizator(u);
}

int
Service::gasesteUtilizator(string &id, string &username, string &nume, string &prenume, string &email, string &parola,
                           string &blibliografie, string &inf_suplimentare) {
    User u(id, username, nume, prenume, email, parola,
           blibliografie, inf_suplimentare);
    return this->repository.cautaUtilizator(u);

}

int Service::adaugaPrietenie(const string &id,const string &username,const string &nume,const string &prenume,const string &email,const string &parola,
                             const string &blibliografie,const string &inf_suplimentare,const string &id2,const string &username2,
                             const string &nume2,const string &prenume2,const string &email2,const string &parola2,const string &blibliografie2,
                             const string &inf_suplimentare2) {
    User prieten1(id,username, nume, prenume, email,parola,
                  blibliografie, inf_suplimentare);
    User prieten2( id2, username2,
                   nume2, prenume2, email2, parola2,blibliografie2,
                   inf_suplimentare2);
    Friendship prietenie(prieten1, prieten2);
    return this->repository.adaugaPrietenie(prietenie);
}

int Service::adaugaMesaj(const string &id,const string &username,const string &nume,const string &prenume,const string &email,
                          const string &parola,const string &blibliografie,const string &inf_suplimentare,const string &id2,
                          const string &username2,const string &nume2,const string &prenume2,const string &email2,const string &parola2,
                          const string &blibliografie2,const string &inf_suplimentare2,const string &text) {
    User prieten1(id,username, nume, prenume, email,parola,
                  blibliografie, inf_suplimentare);
    User prieten2( id2, username2,
                   nume2, prenume2, email2, parola2,blibliografie2,
                   inf_suplimentare2);

    Message mesaj(prieten1, prieten2, text);
    return this->repository.adaugaMesaj(mesaj);
}

int Service::stergereMesaj(string &text, string &id, string &username, string &nume, string &prenume, string &email,
                           string &parola, string &blibliografie, string &inf_suplimentare, string &id2,
                           string &username2, string &nume2, string &prenume2, string &email2, string &parola2,
                           string &blibliografie2, string &inf_suplimentare2) {
    User prieten1(id,username, nume, prenume, email,parola,
                  blibliografie, inf_suplimentare);
    User prieten2( id2, username2,
                   nume2, prenume2, email2, parola2,blibliografie2,
                   inf_suplimentare2);

    Message mesaj(prieten1, prieten2, text);
    return this->repository.stergeMesaj(mesaj);
}

int
Service::modificaMesaj(string &textVechi, string &id, string &username, string &nume, string &prenume, string &email,
                       string &parola, string &blibliografie, string &inf_suplimentare, string &id2, string &username2,
                       string &nume2, string &prenume2, string &email2, string &parola2, string &blibliografie2,
                       string &inf_suplimentare2, string &textNou) {
    User prieten1(id,username, nume, prenume, email,parola,
                  blibliografie, inf_suplimentare);
    User prieten2( id2, username2,
                   nume2, prenume2, email2, parola2,blibliografie2,
                   inf_suplimentare2);

    Message mesaj(prieten1, prieten2, textVechi);
    return this->repository.modificaMesaj(mesaj, textNou);
}

int
Service::stergerePrietenie(string &id, string &username, string &nume, string &prenume, string &email, string &parola,
                           string &blibliografie, string &inf_suplimentare, string &id2, string &username2,
                           string &nume2, string &prenume2, string &email2, string &parola2, string &blibliografie2,
                           string &inf_suplimentare2) {

    User prieten1(id, username, nume, prenume, email, parola,
                  blibliografie, inf_suplimentare);
    User prieten2(id2, username2,
                  nume2, prenume2, email2, parola2, blibliografie2,
                  inf_suplimentare2);
    Friendship pr(prieten1, prieten2);
    return this->repository.stergePrietenie(pr);
}