
#include "ListaContactos.h"

#include <string>
#include <iostream>

#include <sstream>
#include "ListaContactos.h"
#include "NodoContactos.h"
#include "Contacto.h"

ListaContactos::ListaContactos(){
    setCabeza(nullptr);
    setLargo(0);
}

bool ListaContactos::agregarAlInicio(Contacto pPersona)

{
    int i;

// Por alguna razon no me cambia la referencia al puntero.
    NodoContactos* tmpNodo;

    tmpNodo-> setInformacion(pPersona);

    if (getCabeza() == NULL ){

        setCabeza(tmpNodo);

    }
    else {

        tmpNodo -> setSiguiente(this -> cabeza);
        setCabeza(tmpNodo);


    }

    // Contador
    setLargo(getLargo()+1);

    return true;

}



NodoContactos *ListaContactos::getCabeza() {
    return cabeza;
}

void ListaContactos::setCabeza(NodoContactos *cabeza){

    ListaContactos::cabeza = cabeza;
}



int ListaContactos::getLargo()  {
    return largo;
}

void ListaContactos::setLargo(int largo) {
    ListaContactos::largo = largo;
}



string ListaContactos::recorrerLista() {




    string resultado = "";

    if (getCabeza() == NULL){

        resultado = "Lista vacia";

    } else {

        NodoContactos* aux=  getCabeza();

        int contador = 1;

        // Recorre lista mientras que el nodo siguiente no sea NULL
        do{


            resultado += "Persona #: " +   to_string(contador) + " Valor = " + aux -> getInformacion().getApellido() + " Nombre = " + aux -> getInformacion().getNombre() + " Pais = " + aux -> getInformacion().getPais() + " Correo Electronico = " + aux -> getInformacion().getCorreo() + "/n";

            aux = aux  -> getSiguiente();
            contador++;


        } while (aux  -> getSiguiente() != NULL);

    }
    return resultado;




}