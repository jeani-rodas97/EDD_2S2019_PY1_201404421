typedef int Dato;
#ifndef INICIALNODOCABECERA_H
#define INICIALNODOCABECERA_H


class InicialNodoCabecera
{
    public:
        InicialNodoCabecera(Dato t);
        InicialNodoCabecera(Dato p, InicialNodoCabecera* n);
        int datoNodo() const;
        InicialNodoCabecera* enlaceNodo() const
        {
            return enlace;
        }
        PonerEnlace(InicialNodoCabecera* sig);
    protected: //Almacenamiento
        Dato dato;
        InicialNodoCabecera* enlace;

    private:
};

#endif // INICIALNODOCABECERA_H
