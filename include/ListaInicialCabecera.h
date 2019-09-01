#ifndef LISTAINICIALCABECERA_H
#define LISTAINICIALCABECERA_H
typedef int Dato;
#include "InicialNodoCabecera.h"


class ListaInicialCabecera
{
    public:
        ListaInicialCabecera();
        CrearLista(int Dato);

    protected:
        InicialNodoCabecera* primero;

    private:
};

#endif // LISTAINICIALCABECERA_H
