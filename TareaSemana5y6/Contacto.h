

#ifndef TAREASEMANA5Y6_CONTACTO_H
#define TAREASEMANA5Y6_CONTACTO_H

#include <string>
#include <iostream>

using namespace std;

class Contacto {


    std::string apellido;
    std::string nombre;
    std::string pais;
    std::string correo;

public:
    Contacto();

    Contacto(string apellido, string nombre, string pais, string correo);

    const string &getApellido() ;

    void setApellido( string &apellido);

    const string &getNombre() ;

    void setNombre( string &nombre);

    const string &getPais() ;

    void setPais( string &pais);

    const string &getCorreo() ;

    void setCorreo( string &correo);


};


#endif