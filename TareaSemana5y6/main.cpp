#include <iostream>
#include <string>

#include "ListaNumero.h"
#include "ListaContactos.h"
#include "Contacto.h"






// Recordar porner el el using namespace std;
void menuPrincipal();

void menuNumero();

void registrarNumero();

void listarNumero();

void registrarOtroNum();

void menuContactos();

void registrarContacto();

void listarContactos();

void registrarOtroContacto();

using namespace std;

ListaNumero *almacenNumeros;
ListaContactos *agenda;



int main() {
    std::cout << "Bienvenido a la Tarea Semana 5 y 6" << std::endl;


    menuPrincipal();




    return 0;
}

void menuPrincipal() {
    char opcionSelecionada;


    cout<<"\n Menu Principal";


    cout<<"\n+========+";

    cout<<"\n A - Lista Numeros";

    cout<<"\n B - Lista Contacto";

    cout <<"\nDigite su opcion:";

// Lee el imput

    cin>>opcionSelecionada;



    switch(opcionSelecionada)

    {

        case 'A' :

        case 'a' :{cout<<"\n Usted Escogio: Numeros \n";}
                    menuNumero();

            break;

        case 'B' :

        case 'b' :{cout<<"\n Contacto";}
                    menuContactos();

            break;



// Manejador de errores

        default :
            cout<<"\n Opcion Invalida, favor intentelo denuevo.";
            menuPrincipal();




    }

    cout<<"\n";


}


// -------------------------------------------------- Numeros  ---------------------------------------------------

void menuNumero() {

    char opcionSelecionada;

    cout<<"\n Menu Numero";


    cout<<"\n+========+";

    cout<<"\n A - Registrar Numeros";

    cout<<"\n B - Listar Numeros";

    cout <<"\n Digite su opcion:";

// Lee el imput

    cin>>opcionSelecionada;



    switch(opcionSelecionada)

    {

        case 'A' :

        case 'a' :  {cout<<"\n Usted Escogio: Registrar Numeros \n";}
            registrarNumero();

            break;

        case 'B' :

        case 'b' : {cout<<"\n Usted Escogio: Listar Numeros \n";}
            listarNumero();

            break;



// Manejador de errores

        default :
            cout<<"\n Opcion Invalida, favor intentelo denuevo.";
            menuNumero();




    }

    cout<<"\n";

}



void registrarNumero() {


    int numeroParaAgregar;


    cout<<"\n Digite un numero entero: ";
    cout<<"\n";
    cin>>numeroParaAgregar;


    almacenNumeros->agregarAlInicio(numeroParaAgregar);


    cout<<"\n Numero registrado con exito.";
    cout<<"\n -----------------------------------";
    registrarOtroNum();


}

void registrarOtroNum() {

    char opcionSelecionada;

    cout<<"\n Desea agregar otro";


    cout<<"\n+========+";

    cout<<"\n S - Si.";

    cout<<"\n N - No.";

    cout <<"\n Digite su opcion:";

// Lee el imput

    cin>>opcionSelecionada;



    switch(opcionSelecionada)

    {

        case 'S' :

        case 's' : registrarNumero();

            break;

        case 'N' :

        case 'n' : menuNumero();

            break;



// Manejador de errores

        default :
            cout<<"\n Opcion Invalida, favor intentelo denuevo.";
            registrarOtroNum();




    }

    cout<<"\n";

}

void listarNumero() {

    string resultadoMsj;


    resultadoMsj = almacenNumeros->recorrerLista();


}


// -------------------------------------------------- Contacto ---------------------------------------------------

void menuContactos() {
    char opcionSelecionada;

    cout<<"\n Menu Contacto";


    cout<<"\n+========+";

    cout<<"\n A - Registrar Contacto";

    cout<<"\n B - Listar Contacto";

    cout <<"\n Digite su opcion:";

// Lee el imput

    cin>>opcionSelecionada;



    switch(opcionSelecionada)

    {

        case 'A' :

        case 'a' :  {cout<<"\n Usted Escogio: Registrar Contacto \n";}
            registrarContacto();

            break;

        case 'B' :

        case 'b' : {cout<<"\n Usted Escogio: Listar Contacto \n";}
            listarContactos();

            break;



// Manejador de errores

        default :
            cout<<"\n Opcion Invalida, favor intentelo denuevo.";
            menuNumero();




    }

    cout<<"\n";
}



void registrarContacto() {




    string apellido;
    string nombre;
    string pais;
    string correo;



    cout<<"\n Digite un apellido: ";
    cout<<"\n";
    cin>>apellido;



    cout<<"\n Digite un nombre: ";
    cout<<"\n";
    cin>>nombre;

    cout<<"\n Digite un pais: ";
    cout<<"\n";
    cin>>pais;

    cout<<"\n Digite un correo: ";
    cout<<"\n";
    cin>>correo;

    Contacto persona;
    // apellido, nombre, pais, correo

    persona.setApellido(apellido);
    persona.setNombre(nombre);
    persona.setPais(pais);
    persona.setCorreo(correo);

    agenda->agregarAlInicio(persona);



    cout<<"\n Contacto registrado con exito.";
    cout<<"\n -----------------------------------";

    registrarOtroContacto();

}

void registrarOtroContacto() {

    char opcionSelecionada;

    cout<<"\n Desea agregar otro contacto?";


    cout<<"\n+========+";

    cout<<"\n S - Si.";

    cout<<"\n N - No.";

    cout <<"\n Digite su opcion:";

// Lee el imput

    cin>>opcionSelecionada;



    switch(opcionSelecionada)

    {

        case 'S' :

        case 's' : registrarContacto();

            break;

        case 'N' :

        case 'n' : menuContactos();

            break;



// Manejador de errores

        default :
            cout<<"\n Opcion Invalida, favor intentelo denuevo.";
            registrarOtroContacto();




    }

    cout<<"\n";

}


void listarContactos() {

    string resultadoMsj;


    resultadoMsj = agenda->recorrerLista();

}