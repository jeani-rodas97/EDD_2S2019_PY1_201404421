#include "Matriz.h"
#include "Nodo.h"

Matriz::Matriz()
{
    Inicio = new Nodo(0,0,"");
    InicioX = 0;
    InicioY = 0;
    UltimoX = 0;
    UltimoY = 0;
}

Matriz::InicioFila(int x)
{
    Nodo *Fila = new Nodo(x, 0, "");
    if(InicioX == 0)
    {
        InicioX = Fila;
        UltimoX = InicioX;
        Fila->izq = Inicio;
    }
}
