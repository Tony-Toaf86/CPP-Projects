#include <iostream>
using namespace std;

void suma ( int a, int b) {
    int resultado;


    resultado = a + b;
    cout << "el resultado dela suma es: " << resultado << endl;  
}
void resta( int a, int b) { // funcion resta
    int resultado;

    resultado = a - b;
    cout << "el resultado de la resta es: " << resultado << endl; 
}
void multiplicacion( int a, int b) { // funcion multiplica
    int resultado;

    resultado = a * b;
    cout << "el resultado de la multiplicacion  es: " << resultado << endl;
}
void divicion( int a, int b) { // funcion divicino
    int resultado;

    resultado = a / b;
    cout << "el resultado dela divicion es: " << resultado << endl;
}
int main (){
     // delclaracion de variable
     int numero1, numero2;
     int eleccion;

    cout << "-------Proyecto calculadora de consola v1.1------------" << endl ;
    cout << endl;
    cout << "---------------------by Tony Alonzo--------------" << endl;
    cout << " "  << endl;
    cout << " " << endl ;

    cout << "Introdusca un numero>>>>>>>> " << endl;
    cin >> numero1;

    cout << "Introdusca un numero>>>>>>>> " << endl;
    cin >> numero2;

    cout << "----------------------------------------------------------------------------------"<< endl;
    cout << "listando operaciones que se realizan" << endl ;
    cout << "----------------------------------------------------------------------------------"<< endl;
    cout << " " << endl ;

    cout << "1.. suma\n";
    cout << "2..resta\n";
    cout << "3..multiplicacion\n";
    cout << "4..divicion";
    cout << " " << endl ;
    cout << "elija una funcion a realizar>>>> "  << endl;
    cin >> eleccion;
    //condicionales 

    switch (eleccion)
    {
    case 1: suma(numero1, numero2);
        break;
    case 2: resta(numero1, numero2);
        break;
    case 3: multiplicacion(numero1, numero2);
        break;
    case 4: divicion(numero1, numero2);
        break;
    default: cout << "usted ha seleccionado una opsion incorrecta\n intente nuevamente"<<endl;
        break;
    }

 
}