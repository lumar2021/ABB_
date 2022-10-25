//
// Created by luisa on 24/10/2022.
//
 /*
using namespace std;
int main()
{
    char cadena[128];
    ifstream fe("C:/ruta_archivos/archivo.txt");
    while (!fe.eof()) {
        fe >> cadena;
        cout << cadena << endl;
    }
    fe.close();
    system("pause");
    return 0;
}

#include "File.h"
#include<iostream>
#include<fstream>
#include "NumberTree.h"
using namespace std;

void File:: leerArch()
{
    NumberTree *tree= new NumberTree();
    string name="Hola.txt";
    ifstream archivo(name.c_str());

    string line;

    while (getline(archivo, line)) {

        if (line[0]=='m')
        {
           NodeNumber *num= new NodeNumber();

            for (int i=0; i<line.length(); i++)
            {
                cout<<"hola"<<endl;
                string texto;
                if(isdigit(line[i])==false)
                {
                    texto=texto+line[i];
                }
                else
                {
                    tree->addNumberTree(num, line[i]);
                }
                cout<<texto<<endl;
            }

        }


    }
}
  */