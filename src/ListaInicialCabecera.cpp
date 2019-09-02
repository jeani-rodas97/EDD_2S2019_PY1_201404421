#include "ListaInicialCabecera.h"
typedef int Dato;
#include "InicialNodoCabecera.h"

ListaInicialCabecera::ListaInicialCabecera()
{
    primero == 0;
}

ListaInicialCabecera::CrearLista(int x)
{
    primero = new InicialNodoCabecera(x, primero);
}

ListaInicialCabecera::InsertarOrd(Dato entrada)
{
    InicialNodoCabecera* Nuevo;
    Nuevo = new InicialNodoCabecera(entrada);
    if(primero == 0)
        primero = Nuevo;
    else if (entrada < primero -> datoNodo())
    {
        Nuevo -> PonerEnlace(primero);
        primero = Nuevo;
    }
    else
    {
        InicialNodoCabecera *anterior, *p;
        anterior = p = primero;
        while((p->enlaceNodo()!=0)&&(entrada > p->datoNodo()))
        {
            anterior = p;
            p = p ->enlaceNodo();
        }
        if(entrada > p->datoNodo())
            anterior = p;
        Nuevo -> PonerEnlace(anterior->enlaceNodo());
    }
}
