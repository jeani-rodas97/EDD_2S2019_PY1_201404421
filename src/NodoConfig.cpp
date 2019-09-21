#include "NodoConfig.h"
#include<string>

NodoConfig::NodoConfig(std::string nombre, int ancho, int alto, int pixelAncho, int pixelAlto)
{
    this -> nombre = nombre;
    this -> ancho = ancho;
    this -> alto = alto;
    this -> pixelAncho = pixelAncho;
    this -> pixelAlto = pixelAlto;
}
