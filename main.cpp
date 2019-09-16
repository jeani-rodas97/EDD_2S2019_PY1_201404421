#include <iostream>
#include <fstream>  //Para usar ifstream y leer el archivo
#include <sstream>  //Para usar streamstring
#include <string>   //Para reconocer string
#include <stdlib.h> //Para limpiar la consola
#include <NodoConfig.h>
#include<bits/stdc++.h> //Para usar el strcpy que copia los datos

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
    int seleccion;
    int NumCapa; string NameArchivo; //Archivo Inicial
    int Ancho, Alto, PixAncho, PixAlto; //Configuration
    int ids=0, datoC;
    int DatoConfig[3];
    char nombres[20];
    char DConfi[20];
    char simb = ';';
    string Archivo, Carpeta, RutaAux; //Para acceder al archivo
    string Ruta= "C:/Users/Jeany/Documents/Archivos_C++/Proyecto1EDD/"; //Para tener una ruta dinamica
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
        cout << "%%%%%%%%%%%%%%%%%%%% IMAGES %%%%%%%%%%%%%%%%%%%%"<< endl;
        cout << "Ingrese el nombre de la carpeta"<<endl;
        cin >> Carpeta;
        Ruta += Carpeta;
        cout << "Ingrese nombre del archivo .csv" << endl;
        cin >> Archivo;
        RutaAux = Ruta + "/" + Archivo;
        cout<<Ruta<<endl;
        ifstream leer;
        string Name;
        leer.open(RutaAux.c_str(), ios::in);
        while(leer.good())
        {
            for(string linea; getline(leer,linea);)
            {
                leer>>inicio.id>>inicio.simb>>inicio.nombre;
                Name = inicio.nombre;
                cout<<"id "<< inicio.id;
                cout<<" name " << inicio.nombre << endl;
                if(inicio.id == 0)
                {
                    RutaAux = Ruta + "/" + Name;
                    cout<<RutaAux<<endl;
                    ifstream leerConfig;
                    leerConfig.open(RutaAux.c_str(), ios::in);
                    while(leerConfig.good())
                    {
                        for(string lineaConfig; getline(leerConfig, lineaConfig);)
                        {
                            stringstream registro(lineaConfig);
                            for(string dato; getline(registro, dato, ',');)
                            {
                                strcpy(DConfi,dato.c_str());
                                if(std::isdigit(*DConfi))
                                {
                                    cout<<DConfi<<" "<<dato<<endl;
                                    istringstream(dato)>>datoC;
                                    DatoConfig[ids]=datoC;
                                    ids+=1;
                                }
                            }
                        }
                    }
                    leerConfig.close();
                }
            }
        }
        leer.close();
        cout<<DatoConfig[0]<<DatoConfig[1]<<DatoConfig[2]<<DatoConfig[3]<<endl;
        main();
    }


    return 0;
}
