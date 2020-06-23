

#include "NodoContactos.h"
#include "Contacto.h"

NodoContactos::NodoContactos(){



    Contacto persona;
    setInformacion(persona);
    setSiguiente(nullptr);
}

NodoContactos::NodoContactos(Contacto informacion, NodoContactos *siguiente) : informacion(informacion), siguiente(siguiente){

}

NodoContactos::NodoContactos(Contacto informacion) : informacion(informacion), siguiente(nullptr){

}

Contacto NodoContactos::getInformacion() {
    return informacion;
}

void NodoContactos::setInformacion(Contacto informacion) {
    NodoContactos:: informacion = informacion;
}


NodoContactos *NodoContactos::getSiguiente()  {
    return  siguiente;
}

void NodoContactos::setSiguiente(NodoContactos* siguiente) {
    NodoContactos::siguiente = siguiente;
}

