//
// Created by Asus on 21.05.2022.
//

#ifndef PROIECT_SDA_314_ARRAY_H
#define PROIECT_SDA_314_ARRAY_H
#include <iostream>
using namespace std;
template <typename T>

//implementare TAD de la prima cerinta,si anume:
//lista cu reprezentare pe array

class Array {
private:
    //atribute
    int dimMax; //dimensiunea maxima a listei
    int dimCurenta; //dimensiunea curenta a listei
    T* elemente; //vectorul elementele de elemente alocat dinamic de tipul T
    void resize(); //resize la lista, in cazul in care vom avea nevoie, desi cum eu am m=pus dimensiunea maxima de 100,
    //nu prea cred ca o sa fie nevoie de un resize
public:
    //constructorul fara parametrii
    Array(){
        this->dimCurenta=0;
        this->dimMax=100;
        this->elemente= new T[this->dimMax];
    }

    //operatorul de copiere
    Array(const Array<T> &a)
    {this->dimCurenta = a.dimCurenta;
        this->dimMax = a.dimMax;
        this->elemente = new T[this->dimMax];
        for (int i=0;i<this->dimCurenta;i++)
            this->elemente[i]=a.elemente[i];
    }

    //destructorul
    ~Array();

    //getteri
    int GetDimCurenta()
    {return this->dimCurenta;
    }
    int getDimMaxima()
    {return this->dimMax;
    }

    //adauga un element de tipul T in lista
    void add(const T& element)
    {if (this->dimCurenta < this->dimMax )
            this->elemente[this->dimCurenta++]=element;
    }

    //sterge un element de la o anumita pozitie
    void remove(int pozitie)
    {for (int i = pozitie; i<this->dimCurenta-1;i++)
            this->elemente[i]=this->elemente[i+1];
        this->dimCurenta--;

    }

    //seteaza un element la o anumita pozitie
    void set(int pozitie, const T& element)
    {this->elemente[pozitie] = element;
    }

    //getter (da-mi elementul de la pozitia pe care eu o vreau)
    T getItem(int pozitie)
    {return this->elemente[pozitie];
    }

    //operatorul de atribuire
    Array& operator=(const Array<T> &e)
    {if (this!=&e)
        {this->dimCurenta=e.dimCurenta;
            this->dimMax = e.dimMax;
        }
        if (this->elemente)
            delete[] this->elemente;
        this->elemente = new T[this->dimMax];
        for (int i=0;i<this->dimCurenta;i++)
            this->elemente[i]=e.elemente[i];
    }

    //operatorul de egalitate
    bool operator==(const Array<T> &a)
    {for (int i=0;i<this->dimCurenta;i++)
            if (this->elemente[i]!=a.elemente[i])
                return false;
        return true;
    }

    //returneaza pozitia pe care se gaseste elementul dat de mine sau returneaza -1 daca el nu se afla in lista
    int findElement(const T& element)
    {for (int i=0;i<this->dimCurenta;i++)
            if (this->elemente[i]==element)
                return i;
        return -1;
    }

    //verifica daca s-a putut sterge un element din lista returnand 1 sau 0 in caz contrar
    int verifDelete(const T& element){
        int pozitie = this->findElement(element);
        if (pozitie == -1)
            return 0;
        for (int i = pozitie; i< this->dimCurenta; i++)
            this->elemente[i]=this->elemente[i+1];
        this->dimCurenta--;
        return 1;
    }

    //actualizeaza un element pe care eu il dau de la tastatura
    //daca nu se poate face actualizarea in sensul ca eu nu gasesc elementul in lista voi returna -1
    int verifUpdate(const T& element_vechi, const T& element_nou)
    {int pozitie = this->findElement(element_vechi);
        if (pozitie == -1)
            return 0;
        this->elemente[pozitie]= element_nou;
    }

    //afiseaza elementele din lista
    void afisare()
    {
        for (int i=0;i<this->dimCurenta;i++)
            cout<<this->getItem(i)<<endl;
    }
};
template <class T>
//aici fac resize la lista
//gen daca nu imi incap elemente in lista curenta
//adica daca se depaseste dimensiunea maxima
//imi dublez lista
void Array<T>::resize() {
    if (this->dimCurenta > dimMax)
    {this->dimMax *= 2;
        T* temporary;
        temporary = new T[this->dimMax];
        for (int i = 0; i < this->dimCurenta; i++)
            temporary[i] = this->temporary[i];
        if (this->elemente)
            delete[]this->elemente;
        this->elemente = temporary;

    }
}

template<typename T>
//destructorul de la lista
Array<T>::~Array() {
}

#endif //PROIECT_SDA_314_ARRAY_H
