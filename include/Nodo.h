#ifndef NODO_H
#define NODO_H
#include<string>


//El nodo para las capas de los colores.
class Nodo
{
    public:
        int x;
        int y;
        std::string color;
        Nodo *arriba;
        Nodo *abajo;
        Nodo *izq;
        Nodo *der;

        Nodo(int x, int y, std::string color);

    protected:

    private:
};

#endif // NODO_H
