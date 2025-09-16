
#define PERSONA_HPP

#include <iostream>
using namespace std;

class Persona {
private:
    int edad;
    string nombre;

public:


    Persona(string n, int e);
    void MostrarDatos();
    void setEdad(int e);

};

