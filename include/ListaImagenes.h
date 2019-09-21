#ifndef LISTAIMAGENES_H
#define LISTAIMAGENES_H
#include<NodoConfig.h>


class ListaImagenes
{
    public:
        NodoConfig *Primero = 0;
        NodoConfig *Ultimo = 0;
        InsertarConfig(std::string nombre, int ancho, int alto, int pixelAncho, int pixelAlto);
        Mostrar();

    protected:

    private:
};

#endif // LISTAIMAGENES_H
