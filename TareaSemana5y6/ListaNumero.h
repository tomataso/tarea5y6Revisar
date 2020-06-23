
#ifndef TAREASEMANA5Y6_LISTANUMERO_H
#define TAREASEMANA5Y6_LISTANUMERO_H

#include <mmcobj.h>
#include "NodoNumeros.h"
#include <string>

using namespace std;

class ListaNumero {

    NodoNumeros *cabeza;
    int largo;

public:
    ListaNumero();

    NodoNumeros *getCabeza() ;

    void setCabeza(NodoNumeros *cabeza);

    bool agregarAlInicio(int pDato);

    int getLargo() ;

    void setLargo(int largo);

    string recorrerLista();


};


#endif
