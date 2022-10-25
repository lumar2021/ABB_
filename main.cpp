#include<fstream>
#include <iostream>
#include <cstdlib>
#include "NumberTree.h"
using namespace std;

int main() {
    NumberTree *tree= new NumberTree();
    string cadena="";
    fstream fe("C:\\Users\\luisa\\OneDrive\\Escritorio\\untitled\\Hola.txt");
    while (!fe.eof()) {

        fe >> cadena;


            string numero;
            for (int i = 0; i < cadena.length(); i++) {
                if (isdigit(cadena[i]) !=  0) {
                     numero += cadena[i];

                }
                else if(cadena[i]=='m')
                {

                }

            }
        cout<<numero<<endl;







        /*if (cadena[0]=='m') {
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

    fe.close();
    return 0;
}
