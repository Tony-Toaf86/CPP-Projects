#include <iostream>
using namespace std;

int main (){



    

    for ( int edad ; edad < 18; edad = edad ){

        cout  << "introduce tu edad "  << endl;
         cin >> edad;

         if ( edad < 18 ){
             cout << "su edad es icorrecta intenter de nuevo" << endl;
             cout << endl;

         }else {
            cout << "su edad es correcta, puede continuar " << endl ;

         }

    }
   


    return 0;
}