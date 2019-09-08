#include <iostream>
#include <fstream>  //Para usar ifstream y leer el archivo
#include <sstream>  //Para usar streamstring
#include <string>   //Para reconocer string
#include <stdlib.h> //Para limpiar la consola
#include <ListaInicialCabecera.h>

using namespace std;

int main()
{
    ListaInicialCabecera ListaInicial;
    int seleccion;
    string Archivo, ruta;
    cout << "%%%%%%%%%%%%%%%%%%%% MENU %%%%%%%%%%%%%%%%%%%%"<< endl;
    cout << "1. Insert image. "<< endl;
    cout << "2. Select image. "<< endl;
    cout << "3. Apply Filters. " << endl;
    cout << "4. Manual Editing."<< endl;
    cout << "5. Export image. " << endl;
    cout << "6. Reports. "<< endl;
    cin >> seleccion;
    system("cls");
    switch(seleccion)
    {
    case 1:
        cout << "%%%%%%%%%%%%%%%%%%%% IMAGES %%%%%%%%%%%%%%%%%%%%"<< endl;
        cout << "Ingrese nombre del archivo .csv" << endl;
        cin >> Archivo;
        ifstream leer;
        leer.open(Archivo.c_str(), ios::in);
        while(leer.good())
        {
            string NumCapa;
            string NameCapa;
            getline(leer,NumCapa,',');
            getline(leer,NameCapa,',');
            for(string linea; getline(leer, linea);)
            {
                stringstream registro(linea);
                for(string dato; getline(registro, dato, ';');)
                {
                    cout << dato << '\t';
                }
                cout << '\n';
            }
        }
    }
    return 0;
}
