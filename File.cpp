//
// Created by luisa on 24/10/2022.
//

#include "File.h"
#include<iostream>
#include<fstream>
using namespace std;

void File:: leerArch()
{
    string name="Hola.txt";
    ifstream archivo(name.c_str());

    string line;

    while (getline(archivo, line)) {

        if (line[0]=='m')
        {

            for (int i=0; i<line.length(); i++)
            {
                string texto;
                if(isdigit(line[i])==true)
                {

                    texto= line.substr(1, line[i]);
                    continue;
                }
                cout<<texto<<endl;
            }

        }


    }
}