//
// Created by Asus on 21.05.2022.
//

#ifndef PROIECT_SDA_314_USER_H
#define PROIECT_SDA_314_USER_H
#include <iostream>
#include <string>

class User {
private:
    std::string idUtilizator;
    std::string username;
    std::string nume;
    std::string prenume;
    std::string email;
    std::string parola;
    std::string bibliografie;
    std::string inf_suplimentare;
public:
    User(); //constructor fara parametrii
    User(const std::string& idUtilizator, const std::string& username, const std::string& nume, const std::string& prenume, const std::string& email, const std::string& parola, const std::string& bibliografie, const std::string& info_suplimentare);//constructor cu parametrii
    User(const User& alt_utilizator); //constructor de copiere
    ~User(); // destructor

    //aici vom defini getteri
    std::string getIdUtilizator();
    std::string getUsername();
    std::string getNume();
    std::string getPrenume();
    std::string getEmail();
    std::string getParola();
    std::string getBibliografie();
    std::string getInfoSuplimentare();

    //aici vom defini setteri

    void setIdUtilizator(const std::string& idUtilizator);
    void setUsername(const std::string& username);
    void setNume(const std::string& nume);
    void setPrenume(const std::string& prenume);
    void setEmail(const std::string& email);
    void setParola(const std::string& parola);
    void setBibliografie(const std::string& bibliografie);
    void setInfoSuplimentare(const std::string& info_suplimentare);

    //supraincarcam operatorul de citire, respectiv iesire
    friend std::ostream& operator<<(std::ostream& os,  const User& utilizator);
    friend std::istream& operator>>(std::istream& is, User& utilizator);

    //aici ne definim acele metode prin care vom putea sa realizam citiri/operatii pe fisiere

    friend std::ostream& loadIntoCSV(std::ostream& os,  User& utilizator);
    friend std::istream& loadFromCSV(std::istream& is, User& utilizator);

    //supraincarcam operatorul de egalitate (==)
    bool operator==(const User& alt_utilizator);

    //supraincarcam operatorul >
    bool operator>(const User& alt_utilizator);

    //supraincarcam operatorul <
    bool operator<(const User& alt_utilizator);

    //supraincarcam operatorul !=
    bool operator!=(const User& alt_utilizator);

    //supraincarcam operatorul de atribuire
    User& operator=(const User&);

};

#endif //PROIECT_SDA_314_USER_H
