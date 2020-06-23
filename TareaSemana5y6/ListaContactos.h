

#ifndef TAREASEMANA5Y6_LISTACONTACTOS_H
#define TAREASEMANA5Y6_LISTACONTACTOS_H

#include <mmcobj.h>
#include "NodoContactos.h"
#include "Contacto.h"
#include <string>

using namespace std;

class ListaContactos {

    NodoContactos *cabeza;
    int largo;

public:
    ListaContactos();

    NodoContactos *getCabeza() ;

    void setCabeza(NodoContactos *cabeza);

    bool agregarAlInicio(Contacto pPersona);

    int getLargo() ;

    void setLargo(int largo);

    string recorrerLista();


};


#endif
