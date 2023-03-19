//
// Created by Asus on 22.05.2022.
//

#ifndef PROIECT_SDA_314_ABCNODE_H
#define PROIECT_SDA_314_ABCNODE_H

//definim aici ceea ce avem nevoie pentru Arborele Binar de Cautare (Binary Search Tree)
#include<iostream>
using namespace std;
template<typename T>
class OrderedSet;
template<typename T>

class ABCNode{
private:
    T info; //informatia utila din nodul respectiv
    ABCNode* left; //
    ABCNode* right;
public:
    explicit ABCNode(T info) : info(info) {this->left = nullptr, this->right = nullptr;}

    ABCNode(T info, ABCNode<T> *left, ABCNode<T> *right) : info(info), left(left), right(right) {}

    friend class OrderedSet<T>;
};
#endif //PROIECT_SDA_314_ABCNODE_H
