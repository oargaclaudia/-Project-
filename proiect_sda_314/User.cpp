//
// Created by Asus on 21.05.2022.
//


#include <iostream>
#include "User.h"
using namespace std;
//constructor fara parametrii, cel implicit
User::User() {
    this->idUtilizator = "";
    this->username = "";
    this->nume = "";
    this->prenume = "";
    this->email = "";
    this->parola = "";
    this->bibliografie = "";
    this->inf_suplimentare = "";
}

//constructor cu parametrii
User::User(const std::string& idUtilizator, const std::string& username, const std::string& nume, const std::string& prenume, const std::string& email, const std::string& parola, const std::string& bibliografie, const std::string& info_suplimentare)
{
    this->idUtilizator = idUtilizator;
    this->username = username;
    this->nume = nume;
    this->prenume = prenume;
    this->email = email;
    this->parola = parola;
    this->bibliografie = bibliografie;
    this->inf_suplimentare = info_suplimentare;
}

//operatorul de copiere
User::User(const User &alt_utilizator) {
    this->idUtilizator = alt_utilizator.idUtilizator;
    this->username = alt_utilizator.username;
    this->nume = alt_utilizator.nume;
    this->prenume = alt_utilizator.prenume;
    this->email = alt_utilizator.email;
    this->parola = alt_utilizator.parola;
    this->bibliografie=alt_utilizator.bibliografie;
    this->inf_suplimentare=alt_utilizator.inf_suplimentare;
}
//destructor
User::~User() = default;

//definirea getterilor
std::string User::getIdUtilizator() {
    return this->idUtilizator;
}
std::string User::getUsername() {
    return this->username;
}
std::string User::getNume() {
    return this->nume;
}
std::string User::getPrenume() {
    return this->prenume;
}
std::string User::getEmail() {
    return this->email;
}
std::string User::getParola() {
    return this->parola;
}
std::string User::getBibliografie() {
    return this->bibliografie;
}
std::string User::getInfoSuplimentare() {
    return this->inf_suplimentare;
}

//definim setteri
void User::setIdUtilizator(const std::string &id) {
    this->idUtilizator = id;
}
void User::setNume(const std::string &n) {
    this->nume = n;
}
void User::setPrenume(const std::string &p) {
    this->prenume = p;
}
void User::setUsername(const std::string &u) {
    this->username = u;
}
void User::setBibliografie(const std::string &b) {
    this->bibliografie = b;
}
void User::setEmail(const std::string &e) {
    this->email = e;
}
void User::setInfoSuplimentare(const std::string &info_suplimentaree) {
    this->inf_suplimentare = info_suplimentaree;
}

void User::setParola(const std::string &parolaa) {
    this->parola = parolaa;
}

//operatorul de afisare
std::ostream& operator<<(std::ostream&os, const User& utilizatorr)
{
    os<<"ID Utilizator: " << utilizatorr.idUtilizator<<std::endl;
    os<<"Nume Utilizator:  "<<utilizatorr.nume<<std::endl;
    os<<"Prenume Utilizator: "<<utilizatorr.prenume<<std::endl;
    os<<"Username Utilizator: "<<utilizatorr.username<<std::endl;
    os<<"Email Utilizator: "<<utilizatorr.email<<std::endl;
    os<<"Parola Utilizator: "<<utilizatorr.parola<<std::endl;
    os<<"Bibliografie Utilizator: "<<utilizatorr.bibliografie<<std::endl;
    os<<"Informatii suplimentare: "<<utilizatorr.inf_suplimentare<<std::endl;
    return os;
}
//operatorul de citire
std::istream& operator>>(std::istream& is, User& utilizator)
{std::string idUtilizator;
    std::string numeUtilizator;
    std::string prenumeUtilizator;
    std::string usernameUtilizator;
    std::string emailUtilizator;
    std::string parolaUtilizator;
    std::string bibliografieUtilizator;
    std::string informatiiSup;

    std::cout << "Id utilizator: ";
    is >> idUtilizator;

    std::cout << "Nume utilizator: ";
    is >> numeUtilizator;

    std::cout << "Prenume utilizator: ";
    is >> prenumeUtilizator;

    std::cout << "Username utilizator: ";
    is >> usernameUtilizator;

    std::cout << "Email utilizator: ";
    is >> emailUtilizator;

    std::cout << "Parola utilizator: ";
    is >> parolaUtilizator;

    std::cout << "Bibliografie utilizator: ";
    is >> bibliografieUtilizator;

    std::cout << "Informatii suplimentare: ";
    is >> informatiiSup;

    utilizator.idUtilizator = idUtilizator;
    utilizator.nume = numeUtilizator;
    utilizator.prenume = prenumeUtilizator;
    utilizator.username= usernameUtilizator;
    utilizator.email = emailUtilizator;
    utilizator.parola = parolaUtilizator;
    utilizator.inf_suplimentare = informatiiSup;
    utilizator.bibliografie = bibliografieUtilizator;

    return is;

}
//operatorul de egalitate
bool User::operator==(const User &alt_utilizator) {
    return ((this->idUtilizator == alt_utilizator.idUtilizator) && (this->nume == alt_utilizator.nume) &&
            (this->prenume == alt_utilizator.prenume) && (this->email == alt_utilizator.email) &&
            (this->parola == alt_utilizator.parola) && (this->inf_suplimentare == alt_utilizator.inf_suplimentare) &&
            (this->bibliografie == alt_utilizator.bibliografie));
}

//operatorul de atribuire
User &User::operator=(const User &u) {
    if (this!=&u) {
        this->idUtilizator = u.idUtilizator;
        this->nume = u.nume;
        this->prenume = u.prenume;
        this->username = u.username;
        this->parola = u.parola;
        this->email = u.email;
        this->bibliografie = u.bibliografie;
        this->inf_suplimentare = u.inf_suplimentare;
    }
    return *this;
}

//operatorul >
bool User::operator>(const User &alt_utilizator) {
    return (this->idUtilizator > alt_utilizator.idUtilizator);
}

//operatorul <
bool User::operator<(const User &alt_utilizator) {
    return (this->idUtilizator < alt_utilizator.idUtilizator);
}

//descarca informatia utila dintr-un fisier
std::ostream &loadIntoCSV(ostream &os, User &utilizator) {
    os << utilizator.idUtilizator<<",";
    os<<utilizator.username<<",";
    os<<utilizator.nume<<",";
    os<<utilizator.prenume<<",";
    os<<utilizator.email<<",";
    os<<utilizator.parola<<",";
    os<<utilizator.bibliografie<<",";
    os<<utilizator.inf_suplimentare<<","<<endl;
    return os;
}

//incarca informatia utila intr-un fisier
std::istream &loadFromCSV(istream &is, User &utilizator) {
    string idUtilizator;
    string nume;
    string prenume;
    string username;
    string email;
    string parola;
    string bibliografie;
    string inf_suplimentare;

    std::getline(is, idUtilizator, ',');
    std::getline(is, nume, ',');
    std::getline(is, prenume, ',');
    std::getline(is, username, ',');
    std::getline(is, email, ',');
    std::getline(is, parola, ',');
    getline(is, bibliografie, ',');
    getline(is, inf_suplimentare, '\n');

    utilizator.idUtilizator = idUtilizator;
    utilizator.nume= nume;
    utilizator.prenume = prenume;
    utilizator.username=username;
    utilizator.email = email;
    utilizator.parola = parola;
    utilizator.bibliografie = bibliografie;
    utilizator.inf_suplimentare = inf_suplimentare;

    return is;
}

//operatorul !=
bool User::operator!=(const User &alt_utilizator) {
    return !(*this==alt_utilizator);
}
