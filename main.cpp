#include <iostream>
#include "BigTree.h"
using namespace std;
#include "File.h"

int main() {
    Node *root= new Node();
    BigTree *bigTree= new BigTree();
    string date;
    cout<<"Ingrese el nuevo dato"<<endl;
    cin>>date;
    bigTree->addBigTree(root, date);
    cout<<"Ingrese el nuevo dato"<<endl;
    cin>>date;
    bigTree->addBigTree(root, date);
    cout<<"Ingrese el nuevo dato"<<endl;
    cin>>date;
    bigTree->addBigTree(root, date);
    bigTree->showInOrder(root);

    File *file= new File();
    file->leerArch();
    return 0;
}
