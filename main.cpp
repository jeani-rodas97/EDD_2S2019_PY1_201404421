#include <iostream>
#include <fstream>  //Para usar ifstream y leer el archivo
#include <sstream>  //Para usar streamstring
#include <string>   //Para reconocer string
#include <stdlib.h> //Para limpiar la consola
#include <ListaInicialCabecera.h>
#include <NodoConfig.h>

using namespace std;
int Id = 0;

struct MiArchivo
{
    int id;
    char nombre[20];
    char simb = ';';
};

int main()
{
    MiArchivo inicio;
    ListaInicialCabecera ListaInicial;
    int seleccion;
    int NumCapa; string NameArchivo; //Archivo Inicial
    int Ancho, Alto, PixAncho, PixAlto; //Configuration
    string Archivo, ruta;
    cout << "%%%%%%%%%%%%%%%%%%%% MENU %%%%%%%%%%%%%%%%%%%%"<< endl;
    cout << "1. Insert image. "<< endl;
    cout << "2. Select -image. "<< endl;
    cout << "3. Apply Filters. " << endl;
    cout << "4. Manual Editing."<< endl;
    cout << "5. Export image. " << endl;
    cout << "6. Reports. "<< endl;
    cin >> seleccion;
    system("cls");
    switch(seleccion)
    {
    case 1:
        char nombre[20];
        cout << "%%%%%%%%%%%%%%%%%%%% IMAGES %%%%%%%%%%%%%%%%%%%%"<< endl;
        cout << "Ingrese nombre del archivo .csv" << endl;
        cin >> Archivo;
        ifstream leer;
        leer.open(Archivo.c_str(), ios::in);
        while(leer.good())
        {
            for(string linea; getline(leer,linea);)
            {
                leer>>inicio.id>>inicio.simb>>inicio.nombre;
                cout<<"id "<< inicio.id;
                cout<<" name " << inicio.nombre << endl;
                if (inicio.nombre == "config.csv")
                {
                    leer.open("config.csv", ios::in);
                    while(leer.good())
                    {
                        for(string lineaConfig; getline(leer,lineaConfig);)
                        {
                            leer>>Ancho>>Alto>>PixAncho>>PixAlto;
                            cout<<Ancho<<Alto<<PixAncho<<PixAlto;
                        }
                    }
                }
            }
        }
        leer.close();
    }
    return 0;
}
