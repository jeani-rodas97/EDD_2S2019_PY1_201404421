#ifndef LISTAINICIALCABECERA_H
#define LISTAINICIALCABECERA_H
typedef int Dato;
#include "InicialNodoCabecera.h"


class ListaInicialCabecera
{
    public:
        InicialNodoCabecera* primero;
        ListaInicialCabecera();
        CrearLista(int Dato);
        InsertarOrd(Dato Entrada);

    protected:


    private:
};

#endif // LISTAINICIALCABECERA_H
