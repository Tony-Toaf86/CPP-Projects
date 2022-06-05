#include <iostream>
using namespace std;
int main (){
    int edad, numero2, resultado;

    cout << "ingrese su edad: ";
    cin >> edad;

    if(edad <20 ){
        cout << "es menor de edad no puede pasar\n";
        cout << "su edad son " << edad << " agnos\n";
        cout << "ingrese otra edad por favor";
    }
    else 
    {
         cout << "su edad son " << edad << " agnos\n";
         cout << "puede pasar";
    }


    return 0;
}