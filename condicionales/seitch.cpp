
#include <iostream>
using namespace std;

int main (){
    int numero1;


    numero1 = 34;


    cout << "el numero es: "<< numero1 << endl;


cout << "Ingrese la Opción a ejecutar: ";
int opcion = 0;
cin >> opcion;

switch(opcion)
{
    case 1: cout << "Usted ha seleccionado la opción 1";
    break;
    case 2: cout << "Usted ha seleccionado la opción 2";
    break;
    case 3: cout << "Usted ha seleccionado la opción 3";
    break;
    case 50: cout << "Usted ha seleccionado la opción 50";
    break;
    default: cout << "Usted ha ingresado una opción incorrecta";
}


switch (expression)
{
case /* constant-expression */:
    /* code */
    break;

default:
    break;
}

    return 0;
}