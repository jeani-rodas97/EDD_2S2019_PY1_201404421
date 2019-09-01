#include "ListaInicialCabecera.h"
typedef int Dato;
#include "InicialNodoCabecera.h"

ListaInicialCabecera::ListaInicialCabecera()
{
    primero = 0;
}

ListaInicialCabecera::CrearLista(int x)
{
    primero = new InicialNodoCabecera(x, primero);

}
