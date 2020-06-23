

#ifndef TAREASEMANA5Y6_NODONUMEROS_H
#define TAREASEMANA5Y6_NODONUMEROS_H



class NodoNumeros {


    NodoNumeros(int informacion);

    int informacion;
    NodoNumeros* siguiente;


public:

    NodoNumeros();

    NodoNumeros(int informacion, NodoNumeros* siguiente);

    int getInformacion();

    void setInformacion(int informacion);

     NodoNumeros* getSiguiente();

    void setSiguiente(NodoNumeros* siguiente);


};


#endif
