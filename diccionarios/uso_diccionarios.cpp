#include <iostream>
#include <list>
#include <algorithm>
using namespace std;



int main() {
    list<string> miLista;

    // Agregamos elementos a la lista
    miLista.push_back("Hola");
    miLista.push_back("Mundo");
    miLista.push_back("desde");
    miLista.push_back("C++");

    for (auto i = miLista.begin(); i != miLista.end(); i++ ){

    	cout << *i <<  " ";
    }
    
    return 0;
}