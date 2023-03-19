//
// Created by Asus on 22.05.2022.
//

#include "Message.h"
#include <iostream>
using namespace std;
#include "UserInterface.h"
UserInterface::UserInterface() {

}
UserInterface::UserInterface(const Service &s) {
    this->srv=s;
}
UserInterface::~UserInterface() {

}

void UserInterface::showMenu() {
    cout<<"1. Adauga un utilizator in retea. "<<endl;
    cout<<"2. Sterge un utilizator din retea. "<<endl;
    cout<<"3. Afiseaza toti utilizatorii din retea. "<<endl;

    cout<<"4. Adauga un mesaj in retea. "<<endl;
    cout<<"5. Sterge un mesaj din retea. "<<endl;
    cout<<"6. Actualizeaza un mesaj din reta. "<<endl;
    cout<<"7. Afiseaza mesajele din retea. "<<endl;

    cout<<"8. Adauga o relatie de prietenie intre utilizatori. "<<endl;
    cout<<"9. Sterge o relatie de prietenie intre utilizatorii. "<<endl;
    cout<<"10. Afiseaza toate prieteniile din retea. "<<endl;

    cout<<"11. Iesire. "<<endl;

}

void UserInterface::addUser() {
    cout<<"Dati id-ul utilizatorului: "<<endl;
    string ID;
    cin>>ID;
    cout<<"Dati username-ul utilizatorului: "<<endl;
    cin.get();
    string username;
    getline(cin, username);
    cout<<"Dati numele utilizatorului: "<<endl;
    //cin.get();
    string nume;
    getline(cin,nume);
    cout<<"Dati prenumele utilizatorului: "<<endl;
    //cin.get();
    string prenume;
    getline(cin,prenume);
    cout<<"Dati emailul utilizatorului: "<<endl;
    //cin.get();
    string email;
    getline(cin,email);
    cout<<"Dati parola utilizatorului: "<<endl;
    //cin.get();
    string parola;
    getline(cin,parola);
    cout<<"Dati bibliografia utilizatorului: "<<endl;
    //cin.get();
    string bibliografie;
    //cin.get();
    getline(cin, bibliografie);
    cout<<"Dati alte informatii suplimentare: "<<endl;
    //cin.get();
    string infoplus;
    getline(cin, infoplus);

    int rezultat = this->srv.adaugaUtilizator(ID, username, nume, prenume, email, parola, bibliografie, infoplus);
    if (rezultat)
        cout<<"Utilizator adaugat! "<<endl;
    else cout<<"Utilizatorul nu a putut fi adaugat!"<<endl;
}

void UserInterface::deleteUser() {
    cout<<"Dati id-ul utilizatorului de sters: ";
    string ID;
    cin>>ID;
    cout<<"Dati username-ul utilizatorului de sters: ";
    cin.get();
    string username;
    getline(cin, username);
    cout<<"Dati numele utilizatorului de sters: ";
    //cin.get();
    string nume;
    getline(cin,nume);
    cout<<"Dati prenumele utilizatorului de sters: ";
    //cin.get();
    string prenume;
    getline(cin,prenume);
    cout<<"Dati emailul utilizatorului de sters: ";
    //cin.get();
    string email;
    getline(cin,email);
    cout<<"Dati parola utilizatorului de sters: ";
    //cin.get();
    string parola;
    getline(cin,parola);
    cout<<"Dati bibliografia utilizatorului de sters: ";
    //cin.get();
    string bibliografie;
    getline(cin, bibliografie);
    cout<<"Dati alte informatii suplimentare de sters: ";
    //cin.get();
    string infoplus;
    getline(cin, infoplus);

    int rezultat = this->srv.stergereUtilizator(ID, username, nume, prenume, email, parola, bibliografie, infoplus);
    if (rezultat)
        cout<<"Utilizator sters!"<<endl;
    else cout<<"Utilizatorul nu a fost sters!"<<endl;

}

void UserInterface::listUsers() {
    cout<<"Utilizatorii din aplicatie sunt: ";
    this->srv.getUtilizatori().afisare();
}

void UserInterface::addMessage() {
    cout<<"Dati id-ul primului utilizator: ";
    string ID1;
    cin>>ID1;
    cout<<"Dati username-ul primului utilizator: ";
    cin.get();
    string username1;
    getline(cin, username1);
    cout<<"Dati numele primului utilizator: ";
    //cin.get();
    string nume1;
    getline(cin,nume1);
    cout<<"Dati prenumele primului utilizator: ";
    //cin.get();
    string prenume1;
    getline(cin,prenume1);
    cout<<"Dati emailul primului utilizator: ";
    //cin.get();
    string email1;
    getline(cin,email1);
    cout<<"Dati parola primului utilizator: ";
    //cin.get();
    string parola1;
    getline(cin,parola1);
    cout<<"Dati bibliografia primului utilizator: ";
    //cin.get();
    string bibliografie1;
    getline(cin, bibliografie1);
    cout<<"Dati alte informatii suplimentare despre primul utilizator: ";
    //cin.get();
    string infoplus1;
    getline(cin, infoplus1);
    cout<<"Dati id-ul  utilizatorului doi: ";
    string ID2;
    cin>>ID2;
    cout<<"Dati username-ul  utilizatorului doi: ";
    cin.get();
    string username2;
    getline(cin, username2);
    cout<<"Dati numele  utilizatorului doi: ";
    //cin.get();
    string nume2;
    getline(cin,nume2);
    cout<<"Dati prenumele  utilizatorului doi: ";
    //cin.get();
    string prenume2;
    getline(cin,prenume2);
    cout<<"Dati emailul  utilizatorului doi: ";
    //cin.get();
    string email2;
    getline(cin,email2);
    cout<<"Dati parola  utilizatorului doi: ";
    //cin.get();
    string parola2;
    getline(cin,parola2);
    cout<<"Dati bibliografia  utilizatorului doi: ";
    //cin.get();
    string bibliografie2;
    getline(cin, bibliografie2);
    cout<<"Dati alte informatii suplimentare despre  utilizatorul doi: ";
    //cin.get();
    string infoplus2;
    getline(cin, infoplus2);
    string text;
    cout<<"Dati mesajul pe care vreti sa il transmiteti: ";
    //cin.get();
    getline(cin, text);
    int rezultat = this->srv.adaugaMesaj(ID1, username1, nume1, prenume1, email1, parola1, bibliografie1, infoplus1, ID2, username2, nume2, prenume2, email2, parola2, bibliografie2, infoplus2, text);
    if (rezultat)
        cout<<"Mesajul a fost adaugaut.";
    else cout<<"Mesajul nu a putut fi adaugat. ";

}

void UserInterface::removeMessage() {
    cout<<"Dati id-ul primului utilizator: ";
    string ID1;
    cin>>ID1;
    cout<<"Dati username-ul primului utilizator: ";
    cin.get();
    string username1;
    getline(cin, username1);
    cout<<"Dati numele primului utilizator: ";
    //cin.get();
    string nume1;
    getline(cin,nume1);
    cout<<"Dati prenumele primului utilizator: ";
    //cin.get();
    string prenume1;
    getline(cin,prenume1);
    cout<<"Dati emailul primului utilizator: ";
    //cin.get();
    string email1;
    getline(cin,email1);
    cout<<"Dati parola primului utilizator: ";
    //cin.get();
    string parola1;
    getline(cin,parola1);
    cout<<"Dati bibliografia primului utilizator: ";
    //cin.get();
    string bibliografie1;
    getline(cin, bibliografie1);
    cout<<"Dati alte informatii suplimentare despre primul utilizator: ";
    //cin.get();
    string infoplus1;
    getline(cin, infoplus1);
    cout<<"Dati id-ul  utilizatorului doi: ";
    string ID2;
    cin>>ID2;
    cout<<"Dati username-ul  utilizatorului doi: ";
    cin.get();
    string username2;
    getline(cin, username2);
    cout<<"Dati numele  utilizatorului doi: ";
    //cin.get();
    string nume2;
    getline(cin,nume2);
    cout<<"Dati prenumele  utilizatorului doi: ";
    //cin.get();
    string prenume2;
    getline(cin,prenume2);
    cout<<"Dati emailul  utilizatorului doi: ";
    //cin.get();
    string email2;
    getline(cin,email2);
    cout<<"Dati parola  utilizatorului doi: ";
    //cin.get();
    string parola2;
    getline(cin,parola2);
    cout<<"Dati bibliografia  utilizatorului doi: ";
    //cin.get();
    string bibliografie2;
    getline(cin, bibliografie2);
    cout<<"Dati alte informatii suplimentare despre  utilizatorul doi: ";
    //cin.get();
    string infoplus2;
    getline(cin, infoplus2);
    string text;
    cout<<"Dati mesajul pe care vreti sa il transmiteti: ";
    //cin.get();
    getline(cin, text);
    int rezultat = this->srv.stergereMesaj(text,ID1, username1, nume1, prenume1, email1, parola1, bibliografie1, infoplus1, ID2, username2, nume2, prenume2, email2, parola2, bibliografie2, infoplus2 );
    if (rezultat)
        cout<<"Mesajul a fost sters. ";
    else cout<<"Mesajul nu a fost sters. ";
}



void UserInterface::listMessages() {
    cout<<"Mesajele sunt: ";
    this->srv.getMesaje().afisare();
}

void UserInterface::addFriendship() {
    cout<<"Dati id-ul primului utilizator: "<<endl;
    string ID1;
    cin>>ID1;
    cout<<"Dati username-ul primului utilizator: "<<endl;
    cin.get();
    string username1;
    getline(cin, username1);
    cout<<"Dati numele primului utilizator: "<<endl;
    //cin.get();
    string nume1;
    getline(cin,nume1);
    cout<<"Dati prenumele primului utilizator: "<<endl;
    //cin.get();
    string prenume1;
    getline(cin,prenume1);
    cout<<"Dati emailul primului utilizator: "<<endl;
    //cin.get();
    string email1;
    getline(cin,email1);
    cout<<"Dati parola primului utilizator: "<<endl;
    //cin.get();
    string parola1;
    getline(cin,parola1);
    cout<<"Dati bibliografia primului utilizator: "<<endl;
    //cin.get();
    string bibliografie1;
    getline(cin, bibliografie1);
    cout<<"Dati alte informatii suplimentare despre primul utilizator: "<<endl;
    //cin.get();
    string infoplus1;
    getline(cin, infoplus1);
    cout<<"Dati id-ul  utilizatorului doi: "<<endl;

    string ID2;
    cin>>ID2;
    cout<<"Dati username-ul  utilizatorului doi: "<<endl;
    cin.get();
    string username2;
    getline(cin, username2);
    cout<<"Dati numele  utilizatorului doi: "<<endl;
    //cin.get();
    string nume2;
    getline(cin,nume2);
    cout<<"Dati prenumele  utilizatorului doi: "<<endl;
    //cin.get();
    string prenume2;
    getline(cin,prenume2);
    cout<<"Dati emailul  utilizatorului doi: "<<endl;
    // cin.get();
    string email2;
    getline(cin,email2);
    cout<<"Dati parola  utilizatorului doi: "<<endl;
    // cin.get();
    string parola2;
    getline(cin,parola2);
    cout<<"Dati bibliografia  utilizatorului doi: "<<endl;
    // cin.get();
    string bibliografie2;
    getline(cin, bibliografie2);
    cout<<"Dati alte informatii suplimentare despre  utilizatorul doi: "<<endl;
    // cin.get();
    string infoplus2;
    getline(cin, infoplus2);
    int rezultat = this->srv.adaugaPrietenie(ID1, username1, nume1, prenume1, email1, parola1, bibliografie1, infoplus1, ID2, username2, nume2, prenume2, email2, parola2, bibliografie2, infoplus2);
    if (rezultat)
        cout<<"Prietenia a fost adaugata.";
    else cout<<"Prietenia nu a fost adaugata. ";
}

void UserInterface::removeFriendship() {
    cout << "Dati id-ul primului utilizator: ";
    string ID1;
    cin >> ID1;
    cout << "Dati username-ul primului utilizator: ";
    cin.get();
    string username1;
    getline(cin, username1);
    cout << "Dati numele primului utilizator: ";
    //cin.get();
    string nume1;
    getline(cin, nume1);
    cout << "Dati prenumele primului utilizator: ";
    //cin.get();
    string prenume1;
    getline(cin, prenume1);
    cout << "Dati emailul primului utilizator: ";
    //cin.get();
    string email1;
    getline(cin, email1);
    cout << "Dati parola primului utilizator: ";
    //cin.get();
    string parola1;
    getline(cin, parola1);
    cout << "Dati bibliografia primului utilizator: ";
    //cin.get();
    string bibliografie1;
    getline(cin, bibliografie1);
    cout << "Dati alte informatii suplimentare despre primul utilizator: ";
    //cin.get();
    string infoplus1;
    getline(cin, infoplus1);
    cout << "Dati id-ul  utilizatorului doi: ";
    string ID2;
    cin >> ID2;
    cout << "Dati username-ul  utilizatorului doi: ";
    cin.get();
    string username2;
    getline(cin, username2);
    cout << "Dati numele  utilizatorului doi: ";
    //cin.get();
    string nume2;
    getline(cin, nume2);
    cout << "Dati prenumele  utilizatorului doi: ";
    //cin.get();
    string prenume2;
    getline(cin, prenume2);
    cout << "Dati emailul  utilizatorului doi: ";
    //cin.get();
    string email2;
    getline(cin, email2);
    cout << "Dati parola  utilizatorului doi: ";
    //cin.get();
    string parola2;
    getline(cin, parola2);
    cout << "Dati bibliografia  utilizatorului doi: ";
    //cin.get();
    string bibliografie2;
    getline(cin, bibliografie2);
    cout << "Dati alte informatii suplimentare despre  utilizatorul doi: ";
    //cin.get();
    string infoplus2;
    getline(cin, infoplus2);
    int rezultat = this->srv.stergerePrietenie(ID1, username1, nume1, prenume1, email1, parola1, bibliografie1,
                                               infoplus1, ID2, username2, nume2, prenume2, email2, parola2,
                                               bibliografie2, infoplus2);
    if (rezultat)
        cout << "Prietenia a fost stearsa";
    else cout << "Prietenia nu a fost stearsa.";
}

void UserInterface::listFriends() {
    cout<<"Prieteniile din aplicatie sunt: ";
    Array<Friendship> friendships = this->srv.getRelatiiPrietenie();

    for (int i = 0; i < friendships.GetDimCurenta(); i++) {
        cout<<"ID1: "<<friendships.getItem(i).getPrimulPrieten().getIdUtilizator() <<" ID2: "<<friendships.getItem(i).getAlDoileaPrieten().getIdUtilizator()<<endl;
    }
}

void UserInterface::runMenu() {
    int optiune;
    cout<<"Dati optiunea: ";
    cin>>optiune;
    while (optiune != 11) {
        if (optiune == 1)
            UserInterface::addUser();
        if (optiune == 2)
            UserInterface::deleteUser();
        if (optiune == 3)
            UserInterface::listUsers();
        if (optiune == 4)
            UserInterface::addMessage();
        if (optiune == 5)
            UserInterface::removeMessage();
        if (optiune == 7)
            UserInterface::listMessages();
        if (optiune == 8)
            UserInterface::addFriendship();
        if (optiune == 9)
            UserInterface::removeFriendship();
        if (optiune == 10)
            UserInterface::listFriends();
        if (optiune == 11)
            break;
        UserInterface::showMenu();
        cout << "Introduceti optiunea dorita aici:" << endl;
        cin >> optiune;
    }

}
