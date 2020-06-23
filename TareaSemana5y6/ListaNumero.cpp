

#include <sstream>
#include "ListaNumero.h"
#include "NodoNumeros.h"

ListaNumero::ListaNumero(){
    setCabeza(nullptr);
    setLargo(0);
}

bool ListaNumero::agregarAlInicio(int pDato)

{
    int i;

// Por alguna razon no me cambia la referencia al puntero.
     NodoNumeros* tmpNodo;

    tmpNodo-> setInformacion(pDato);

    if (getCabeza() == NULL ){

        setCabeza(tmpNodo);

    }
    else {

        tmpNodo -> setSiguiente(this -> getCabeza());
        setCabeza(tmpNodo);


    }

    // Contador
    setLargo(getLargo()+1);

    return true;

}



NodoNumeros *ListaNumero::getCabeza() {
    return cabeza;
}

void ListaNumero::setCabeza(NodoNumeros *cabeza){

    ListaNumero::cabeza = cabeza;
}



int ListaNumero::getLargo()  {
    return largo;
}

void ListaNumero::setLargo(int largo) {
    ListaNumero::largo = largo;
}



string ListaNumero::recorrerLista() {




 string resultado = "";

    if (getCabeza() == NULL){

        resultado = "Lista vacia";

    } else {

        NodoNumeros* aux=  getCabeza();

        int contador = 1;

        // Recorre lista mientras que el nodo siguiente no sea NULL
        do{


            resultado += "Dato Numerico Posición#: " +   to_string(contador) + " Valor = " + to_string(aux -> getInformacion()) + "/n";

            aux = aux  -> getSiguiente();
            contador++;


        } while (aux  -> getSiguiente() != NULL);

    }
    return resultado;


/*  std::stringstream  sstm;


    if (this -> cabeza == nullptr){
            sstm <<  "Lista Vacia"  "" <<  endl;

    }

    else
    {
        NodoNumeros *aux = this -> cabeza;

        while (aux != nullptr){
            sstm << aux -> getInformacion() << "\n";
            aux = aux -> getSiguiente();
        }
    }



    return sstm.str();

 */

}