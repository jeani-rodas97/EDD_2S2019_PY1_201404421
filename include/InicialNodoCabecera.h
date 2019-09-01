typedef int Dato;
#ifndef INICIALNODOCABECERA_H
#define INICIALNODOCABECERA_H


class InicialNodoCabecera
{
    public:
        InicialNodoCabecera(Dato t);
        InicialNodoCabecera(Dato p, InicialNodoCabecera* n);
        Dato datoNodo() const
        {
            return dato;
        }
        InicialNodoCabecera* enlaceNodo() const
        {
            return enlace;
        }
        void PonerEnlace(InicialNodoCabecera* sig)
        {
            enlace = sig;
        }
    protected: //Almacenamiento
        Dato dato;
        InicialNodoCabecera* enlace;

    private:
};

#endif // INICIALNODOCABECERA_H
