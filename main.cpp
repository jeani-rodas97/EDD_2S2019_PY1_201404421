#include <iostream>
#include <fstream>  ///Para usar ifstream y leer el archivo
#include <sstream>  ///Para usar streamstring
#include <string>   ///Para reconocer string
#include <stdlib.h> ///Para limpiar la consola
#include <NodoConfig.h>
#include <ArbolImg.h>
#include "ListaImagenes.h"
#include<bits/stdc++.h> ///Para usar el strcpy que copia los datos

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
    int seleccion, seleccionReport;
    int NumCapa; string NameArchivo; ///Archivo Inicial
    int Ancho, Alto, PixAncho, PixAlto; ///Configuration
    int ids=0, datoC;
    int DatoConfig[3];
    char* nombres;
    char DConfi[20];
    char simb = ';';
    string Archivo, Carpeta, RutaAux; ///Para acceder al archivo
    string Ruta= "C:/Users/Jeany/Documents/Archivos_C++/Proyecto1EDD/"; ///Para tener una ruta dinamica
    ListaImagenes *image = new ListaImagenes;
    ListaImagenes imagen;
    cout << "%%%%%%%%%%%%%%%%%%%% MENU %%%%%%%%%%%%%%%%%%%%"<< endl;
    cout << "1. Insert image. "<< endl;
    cout << "2. Select -image. "<< endl;
    cout << "3. Apply Filters. " << endl;
    cout << "4. Manual Editing."<< endl;
    cout << "5. Export image. " << endl;
    cout << "6. Reports. "<< endl;
    cin >> seleccion;
    system("cls");
    if (seleccion == 1)
    {
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
                    NodoConfig *NC = new NodoConfig(Carpeta, DatoConfig[0],DatoConfig[1],DatoConfig[2],DatoConfig[3]);
                    cout<<DatoConfig[0]<<DatoConfig[1]<<DatoConfig[2]<<DatoConfig[3]<<endl;
                    cout<<"Nombre de la carpeta"<<Carpeta<<endl;
                    imagen.InsertarConfig(Carpeta, DatoConfig[0], DatoConfig[1], DatoConfig[2], DatoConfig[3]);
                    //InsertarConfig(Carpeta, DatoConfig[0], DatoConfig[1], DatoConfig[2], DatoConfig[3]);
                    leerConfig.close();
                }
                else
                {
                    RutaAux = Ruta + "/" + Name;
                    cout<<RutaAux<<endl;
                    ifstream leerCsv;
                    leerCsv.open(RutaAux.c_str(), ios::in);
                    while(leerCsv.good())
                    {
                        for(string lineaCsv; getline(leerCsv, lineaCsv);)
                        {
                            stringstream registro(lineaCsv);
                            for(string dato; getline(registro, dato, ',');)
                            {
                                cout << dato << '\t';
                                //Reconoce la cantidad de columnas, aumenta x
                            }
                            cout << '\n';
                            //Crea las filas, si aumenta, aumenta y
                        }
                        cout<<"lee csv "<<endl;
                    }
                    leerCsv.close();
                }
            }
        }
        leer.close();
        main();
    }
    else if(seleccion == 2)
    {
        cout<<"LLega a la seleccion"<<endl;
        imagen.Mostrar();
        main();
    }
    else if(seleccion == 6)
    {
        cout << "%%%%%%%%%%%%%%%%%%%% MENU REPORTES %%%%%%%%%%%%%%%%%%%%"<< endl;
        cout << "1. Imported image report"<< endl;
        cout << "2. Select -image. "<< endl;
        cout << "3. Apply Filters. " << endl;
        cout << "4. Manual Editing."<< endl;
        cout << "5. Export image. " << endl;
        cout << "6. Reports. "<< endl;
        cin >> seleccionReport;
        system("cls");
        if(seleccionReport = 1)
        {
            ofstream ImgFile;
            ImgFile.open("ReporteImg.txt");
            ImgFile <<"digraph g: { rankdir=LR;"<<endl;
            ImgFile.close();
            main();
        }
    }

    return 0;
}
