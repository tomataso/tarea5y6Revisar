

#include "NodoNumeros.h"



NodoNumeros::NodoNumeros(){

    setInformacion(0);
    setSiguiente(nullptr);
}

NodoNumeros::NodoNumeros(int informacion, NodoNumeros *siguiente) : informacion(informacion), siguiente(siguiente){

}

NodoNumeros::NodoNumeros(int informacion) : informacion(informacion), siguiente(nullptr){

}

int NodoNumeros::getInformacion() {
    return informacion;
}

void NodoNumeros::setInformacion(int informacion) {
    NodoNumeros:: informacion = informacion;
}


NodoNumeros *NodoNumeros::getSiguiente()  {
    return  siguiente;
}

void NodoNumeros::setSiguiente(NodoNumeros* siguiente) {
    NodoNumeros::siguiente = siguiente;
}