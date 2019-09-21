#include "ListaImagenes.h"
#include <iostream>
#include <string>   ///Para reconocer string
#include<NodoConfig.h>



ListaImagenes::InsertarConfig(std::string nombre, int ancho, int alto, int pixelAncho, int pixelAlto)
{
    std::string Comparar;
    NodoConfig* nuevo = new NodoConfig(nombre,ancho,alto,pixelAncho,pixelAlto);
    NodoConfig *actual = Primero;
    if (Primero == 0) //Lista vacia
    {
        Primero = nuevo;
    }
    else
    {
        if(actual->nombre.compare(nombre) <= 0)
        {
            nuevo->sig = actual;
        }
        else
        {
            actual->sig = nuevo;
        }
    }
}

ListaImagenes::Mostrar()
{
    NodoConfig *temp = Primero;
    do
    {
        std::cout<<temp->nombre<<std::endl;
        temp = temp->sig;
        //return Nom;
    }while(temp!=0);
}

