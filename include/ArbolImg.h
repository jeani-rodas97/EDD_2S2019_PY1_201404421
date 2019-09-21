#ifndef ARBOLIMG_H
#define ARBOLIMG_H
#include<string>
#include<NodoConfig.h>


class ArbolImg
{
    public:
        NodoConfig *
        CrearNodo(std::string nombre, int ancho, int alto, int pixelAncho, int pixelAlto);
        Insertar(NodoConfig *&Arbol, std::string nombre, int ancho, int alto, int pixelAncho, int pixelAlto);

    protected:

    private:
};

#endif // ARBOLIMG_H
