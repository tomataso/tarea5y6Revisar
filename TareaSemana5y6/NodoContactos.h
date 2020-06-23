

#ifndef TAREASEMANA5Y6_NODOCONTACTOS_H
#define TAREASEMANA5Y6_NODOCONTACTOS_H


#include "Contacto.h"

class NodoContactos {

    NodoContactos(Contacto informacion);

    Contacto informacion;
    NodoContactos* siguiente;


public:

    NodoContactos();

    NodoContactos(Contacto informacion, NodoContactos* siguiente);

    Contacto getInformacion();

    void setInformacion(Contacto informacion);

    NodoContactos* getSiguiente();

    void setSiguiente(NodoContactos* siguiente);


};




#endif
