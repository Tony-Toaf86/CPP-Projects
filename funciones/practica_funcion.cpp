#include <iostream>
using namespace std;
/*
void funcion(){

    int resultado;
    int x, y;
    
    cout << "introduce un numero: " <<endl;
    cin >> x;

    cout << "introduce otro numero: " <<endl;
    cin >> y;

    resultado = x+y;
    cout << "el resultado de la suma es: "<< resultado;
*/

void comapara_edad(){
    int edad;
    cout << "introdece tu edad: ";
    cin >> edad;

    if (edad < 18 )
    {
       cout << "eres menor de edad";

    }else{
        cout << "eres mayor de edad"<< endl;
        cout << "el programa a finalizado";


    }
    


}

int main (){
    comapara_edad();
    return 0;
}