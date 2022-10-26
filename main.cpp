#include<fstream>
#include <iostream>
#include <cstdlib>
#include "NumberTree.h"
#include "BigTree.h"


using namespace std;


NumberTree *NumTree= new NumberTree();

int main() {
    Node *tree= new Node();
    BigTree *bigtree= new BigTree();
    string cadena="";
    string name="C:\\Users\\luisa\\OneDrive\\Escritorio\\untitled\\Hola.txt";

    ifstream archivo(name.c_str());

    string line;

    while (getline(archivo, line)) {
        if(line[0]=='m')
        {
            string cadena;
            string numero;
           for(int i=2; i<line.length(); i++)
           {
               if(isdigit(line[i])==0)
               {
                  cadena+=line[i];
               }
               else
               {
                   numero+=line[i];
               }
           }
           Node *aux= new Node();
           aux->dato=cadena;

           bigtree->addBigTree(tree, cadena);

            NodeNumber *littleNumber = new NodeNumber();
            bigtree->hijonum= littleNumber;
            for (int i = 0; i < numero.length();  i++)
            {
                int num= (int)numero[i]- int('0');
                //añadir los numeros a las hojas ordenados
                NumTree->addNumberTree(littleNumber, num );
            }
            //mostrar
            NumTree->showNumberTree(littleNumber);



        }
        //bigtree->showInOrder(tree);








        /*
         * if(cadena[0]=='m')
            {
                cout<<cadena.length()<<endl;
                for (int i = 0; i < cadena.length(); i++) {
                    if (isdigit(cadena[i]) !=  0) {
                        numero += cadena[i];

                    }
                    if (cadena[0]=='m') {
            string text= "";

            for(int i=2; i< cadena.length(); i++) {
                if (typeid(cadena[i]) == typeid(char)) {
                    text+=cadena[i];
                }
                cout<<text<<"Este es el text"<<endl;
            }

        }
*/

        }

    archivo.close();
    return 0;
}

