//
// Created by luisa on 24/10/2022.
//

#include "BigTree.h"
using namespace std;
#include <iostream>

void BigTree :: addBigTree(Node *& tree, string date)
{
    Node *aux= new Node();

    aux->dato= date;
    aux->right= NULL;
    aux->left= NULL;

    if(tree == NULL)
    {
        tree= aux;
    }
    else
    {
        if (date[0] > tree->dato[0]) {

            if (tree->right == NULL) {
                tree->right = aux;
            } else {
                addBigTree(tree->right, date);
            }
        } else {
            if (tree->left == NULL) {
                tree->left = aux;
            } else {
                addBigTree(tree->left, date);
            }
        }
    }

}

void BigTree::showInOrder(Node *tree)
{

    if(tree==NULL)
        return;
    else {
        showInOrder(tree->left);
        cout << tree->dato << endl;
        showInOrder(tree->right);
    }


}
