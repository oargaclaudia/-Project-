//
// Created by Asus on 21.05.2022.
//

#ifndef PROIECT_SDA_314_MESSAGE_H
#define PROIECT_SDA_314_MESSAGE_H
#include <iostream>
#include "User.h"
using namespace std;

class Message {
    //definim atributele
private:
    string text; //mesajul pe care vrem sa il trimitem
    User sender; //utilizatorul care trimite mesajul (de tip User, clasa definita anterior)
    User receiver; //utilizatorul care primeste mesajul (de tip User, clasa definita anterior)
public:
    Message(); //constructor fara parametrii
    Message(const User &sender,const User &receiver,const string &text); //constructor cu parametrii

    //ne definim getterii
    string& getText();
    User& getSender();
    User& getReceiver();

    //ne definim setterii
    void setText(const string& text);
    void setSender(const User& sender);
    void setReceiver(const User& receiver);

    //ne supraincarcam operatorul de egalitate
    bool operator==(const Message &alt_mesaj);

    //operatorul !=
    bool operator!=(const Message &alt_mesaj);

    //operatorul de atribuire
    Message& operator=(const Message&);

    //destructorul care trebuie sa apara in fiecare clasa
    ~Message();

    //operatorul de afisare
    friend ostream& operator<<(ostream& os,  Message mesaj);
};
#endif //PROIECT_SDA_314_MESSAGE_H
