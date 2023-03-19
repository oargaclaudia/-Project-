#include <iostream>
#include "Repository.h"
#include "Service.h"
#include "UserInterface.h"


int main() {
    Repository repo;
    Service service(repo);

    service.adaugaUtilizator("1", "1", "1", "1", "1", "1", "1", "1");
    service.adaugaUtilizator("2", "2", "2", "2", "2", "2", "2", "2");
    service.adaugaUtilizator("3", "3", "3", "3", "3", "3", "3", "3");
    service.adaugaUtilizator("4", "4", "4", "4", "4", "4", "4", "4");
    service.adaugaUtilizator("5", "5", "5", "5", "5", "5", "5", "5");
    service.adaugaUtilizator("6", "6", "6", "6", "6", "6", "6", "6");
    service.adaugaUtilizator("7", "7", "7", "7", "7", "7", "7", "7");
    service.adaugaUtilizator("8", "8", "8", "8", "8", "8", "8", "8");
    service.adaugaUtilizator("9", "9", "9", "9", "9", "9", "9", "9");
    service.adaugaUtilizator("10", "10", "10", "10", "10", "10", "10", "10");
    service.adaugaUtilizator("11", "11", "11", "11", "11", "11", "11", "11");
    service.adaugaUtilizator("12", "12", "12", "12", "12", "12", "12", "12");
    service.adaugaUtilizator("13", "13", "13", "13", "13", "13", "13", "13");
    service.adaugaUtilizator("14", "14", "14", "14", "14", "14", "14", "14");
    service.adaugaUtilizator("15", "15", "15", "15", "15", "15", "15", "15");
    service.adaugaPrietenie("1", "1", "1", "1", "1", "1", "1", "1","2", "2", "2", "2", "2", "2", "2", "2" );
    service.adaugaPrietenie("1", "1", "1", "1", "1", "1", "1", "1","3", "3", "3", "3", "3", "3", "3", "3" );
    service.adaugaPrietenie("1", "1", "1", "1", "1", "1", "1", "1","3", "3", "3", "3", "3", "3", "3", "3" );
    service.adaugaPrietenie("2", "2", "2", "2", "2", "2", "2", "2","3", "3", "3", "3", "3", "3", "3", "3" );
    service.adaugaPrietenie("2", "2", "2", "2", "2", "2", "2", "2","4", "4", "4", "4", "4", "4", "4", "4" );
    service.adaugaPrietenie("3", "3", "3", "3", "3", "3", "3", "3","4", "4", "4", "4", "4", "4", "4", "4" );
    service.adaugaPrietenie("3", "3", "3", "3", "3", "3", "3", "3","5", "5", "5", "5", "5", "5", "5", "5" );
    service.adaugaPrietenie("4", "4", "4", "4", "4", "4", "4", "4","5", "5", "5", "5", "5", "5", "5", "5" );
    service.adaugaPrietenie("4", "4", "4", "4", "4", "4", "4", "4","6", "6", "6", "6", "6", "6", "6", "6" );


    service.adaugaMesaj("1", "1", "1", "1", "1", "1", "1", "1","2", "2", "2", "2", "2", "2", "2", "2","Hei, ce faci?" );
    service.adaugaMesaj("1", "1", "1", "1", "1", "1", "1", "1","3", "3", "3", "3", "3", "3", "3", "3","Buna." );
    UserInterface UI(service);
    UI.showMenu();
    UI.runMenu();

    return 0;
}
