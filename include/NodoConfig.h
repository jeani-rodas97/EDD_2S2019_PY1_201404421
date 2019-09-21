#ifndef NODOCONFIG_H
#define NODOCONFIG_H
#include<string>


class NodoConfig
{
    public:
        NodoConfig *sig;
        NodoConfig *ant;
        NodoConfig *rigth;
        NodoConfig *left;
        std::string nombre;
        int ancho;
        int alto;
        int pixelAncho;
        int pixelAlto;
        NodoConfig(std::string nombre, int ancho, int alto, int pixelAncho, int pixelAlto);

    protected:

    private:
};

#endif // NODOCONFIG_H
