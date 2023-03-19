//
// Created by Asus on 22.05.2022.
//

#ifndef PROIECT_SDA_314_ORDEREDSET_H
#define PROIECT_SDA_314_ORDEREDSET_H
#include "ABCNode.h"
#include "User.h"
#include <iostream>
#include <vector>
using namespace std;
template<class T>
class OrderedSet{
private:
    ABCNode<T>* root;
    int add(ABCNode<T>* ad, T elem){
        if (ad->info == elem)
            return 0;
        if(ad->info > elem){ // adaugam pe stanga
            if(ad->left != nullptr) {
                add(ad->left, elem);
            }else{
                ad->left = new ABCNode<T>(elem);
            }
        }else{  //adaugam in dreapta
            if(ad->right != nullptr) {
                add(ad->right, elem);
            }else{
                ad->right = new ABCNode<T>(elem);
            }
        }
        return 1;
    }

    int sterge(ABCNode<T>* el,T elem,vector<T> &a, bool &valoare)
    {if (el== nullptr)
        {    valoare=false;
            return 0;
        }
        if (el->info == elem)
        {valoare=true;}
        else
            a.push_back(el->info);
        //acum suntem responsabili sa tratam partea dreapta, respectiv stanga a
        if (el->right != nullptr)
            sterge(el->right, elem, a , valoare);
        if (el->left != nullptr)
            sterge(el->left, elem, a , valoare);
        if (valoare)
            return 1;
        return 0;
    }
    int size_arbore(ABCNode<T>* el)
    {if(el == nullptr)
            return 0;
        return 1 + size_arbore(el->left) + size_arbore(el->right);}

    int find_arbore(ABCNode<T>* el, T info)
    {    if(el == nullptr)
            return 0;
        if(el->info == info)
            return 1;
        if (el->info < info)
            return find_arbore(el->right, info);
        if (el->info > info)
            return find_arbore(el->left, info);

    }
    void afisareIN(ABCNode<T>* ad){
        if(ad != nullptr){
            afisareIN(ad->left);
            cout<<ad->info<<endl;
            afisareIN(ad->right);
        }
    }

public:
    OrderedSet(){
        this->root = nullptr;
    }

    void afisare(){
        afisareIN(this->root);
    }
    int adaugare(T info){
        if(this->root == nullptr)
        {
            this->root = new ABCNode<T>(info);
            return 1;
        }
        else
            return add(this->root, info);
    }

    int stergere(T info){
        OrderedSet<T> multime;
        vector<T> v;
        bool valoare = false;
        int rezultat = sterge(this->root, info, v, valoare);
        while(!v.empty())
        {
            multime.adaugare(v.back());
            v.pop_back();
        }
        this->root = multime.root;
        if(rezultat)
            return 1;
        return 0;

    }
    int find(const T el)
    {    return this->find_arbore(this->root, el);
    }

    int size()
    {return size_arbore(this->root);

    }
    OrderedSet<T>& operator=(const OrderedSet<T> &multime)
    {if (this!=&multime)
            this->root = multime.root;
        return *this; //dereferentiem ca sa afisam valoarea
    }
};

#endif //PROIECT_SDA_314_ORDEREDSET_H
