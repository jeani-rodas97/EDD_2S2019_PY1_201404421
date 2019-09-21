#include "ArbolImg.h"
#include <iostream>
#include <string>
#include<NodoConfig.h>

NodoConfig *ArbolImg::CrearNodo(std::string nombre, int ancho, int alto, int pixelAncho, int pixelAlto)
{
    NodoConfig *Nuevo = new NodoConfig(nombre,ancho,alto,pixelAncho,pixelAlto);
    Nuevo->nombre = nombre;
    Nuevo->ancho = ancho;
    Nuevo->alto = alto;
    Nuevo->pixelAncho = pixelAncho;
    Nuevo->pixelAlto = pixelAlto;
    Nuevo->rigth = 0;
    Nuevo->left = 0;
    return Nuevo;
}

ArbolImg::Insertar(NodoConfig *&Arbol, std::string nombre, int ancho, int alto, int pixelAncho, int pixelAlto)
{
    if(Arbol == 0)
    {
        *Arbol = NodoConfig(nombre,ancho,alto,pixelAncho,pixelAlto);
    }
    else if (nombre.compare(Arbol->nombre) <= 1)
    {
        Insertar(Arbol->left, nombre,ancho,alto,pixelAncho,pixelAlto);
    }
    else
    {
        Insertar(Arbol->rigth, nombre,ancho,alto,pixelAncho,pixelAlto);
    }
}
