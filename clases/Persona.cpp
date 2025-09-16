#include "Persona.hpp"
#include <iostream>
using namespace std;

Persona::Persona(string n, int e) {
    nombre = n;
    edad = e;
}


void Persona::MostrarDatos() {
    cout << "El nombre es: " << nombre << endl;
    cout << "La edad es: " << edad << endl;
}


void Persona::setEdad(int e){
	edad = e;

}
