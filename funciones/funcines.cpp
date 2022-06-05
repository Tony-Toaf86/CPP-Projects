#include <iostream>
using namespace std;

void funcion(){

    cout << "este es un texto de la funcion"<< endl;

    cout << "este es otro texto de la funcion";

}
void argumentos(int a, int b){
    int r;

    r=a+b;

    cout << "el resultado es: " << r;

}


int main (){
   

    int x,y;
    x= 9;
    y=89;

    argumentos(x, y);

    






    return 0;

}