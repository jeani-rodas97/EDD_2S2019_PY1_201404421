#include "InicialNodoCabecera.h"

InicialNodoCabecera::InicialNodoCabecera(Dato t)
{
    dato = t;
    enlace = 0;
}

InicialNodoCabecera::InicialNodoCabecera(Dato p, InicialNodoCabecera* n)
{
    dato = p;
    enlace = n;
}

int InicialNodoCabecera::datoNodo() const
{
    return dato;
}

InicialNodoCabecera::PonerEnlace(InicialNodoCabecera* sig)
{
    enlace = sig;
}
