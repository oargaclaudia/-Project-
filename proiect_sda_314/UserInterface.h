//
// Created by Asus on 22.05.2022.
//

#ifndef PROIECT_SDA_314_USERINTERFACE_H
#define PROIECT_SDA_314_USERINTERFACE_H
#include "Service.h"

class UserInterface {
public:
    UserInterface();
    UserInterface(const Service &s);
    ~UserInterface();
    void runMenu();
    void showMenu();

private:
    Service srv;
    void listUsers();
    void addUser();
    void deleteUser();
    void addFriendship();
    void removeFriendship();
    void listFriends();
    void addMessage();
    void removeMessage();
    void listMessages();
};


#endif //PROIECT_SDA_314_USERINTERFACE_H
