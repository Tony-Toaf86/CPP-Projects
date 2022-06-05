#include "iostream" 

using namespace std;
int main () {
    string nombre, genero, residencia, estado_civil;
    int fecha_namcimiento, edad;


    nombre = ("Ton Omar Alonzo");
    genero =  ("masculino");
    residencia = ("Trojes");
    estado_civil = ("Soltero");
    fecha_namcimiento = 2001;
    edad = 21;

    cout << "mi nombre es "<< nombre;
    cout << "con genero " <<genero;
    cout << "residente en: " <<residencia;
    cout << "con estado civil: "<< estado_civil;
    cout << "nacido en el ano: " << fecha_namcimiento;
    cout << "y con edad: " <<edad;
    return 0;
}