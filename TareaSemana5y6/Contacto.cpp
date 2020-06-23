
#include "Contacto.h"

Contacto::Contacto() {}

Contacto::Contacto(string basicString, string string1, string string2, string string3) {}

const string &Contacto::getApellido()  {
    return apellido;
}

void Contacto::setApellido(string &apellido) {
    Contacto::apellido = apellido;
}

const string &Contacto::getNombre()  {
    return nombre;
}

void Contacto::setNombre(string &nombre) {
    Contacto::nombre = nombre;
}

const string &Contacto::getPais()  {
    return pais;
}

void Contacto::setPais(string &pais) {
    Contacto::pais = pais;
}

const string &Contacto::getCorreo()  {
    return correo;
}

void Contacto::setCorreo(string &correo) {
    Contacto::correo = correo;
}




