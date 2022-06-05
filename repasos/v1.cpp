#include <iostream>
using namespace std;
void numero (){
    int numero;
    cout << "introduce un numero : "<< endl ;
    cin >> numero;

    cout << " el numeo es: " << numero << endl;

    switch (numero)
    {
    case 1: cout  << "el numero es 1";
    break;
    case 2: cout  << "el numero es 2";
    break;
    
    default: cout << "el numero no es 1";
        break;
    }




}
int main () {

    numero();


    return 0;
}