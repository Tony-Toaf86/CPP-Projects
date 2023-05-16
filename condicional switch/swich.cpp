#include  <iostream>
//uso sencillo del condiconal switch
using namespace std;
int main (){

	int numero;

	cout << "ingrese el numero del 1 al 3:  ";
	cin >> numero;


	switch (numero){
	case 1:
		cout << "numero es 1";
		break;
	case 2:
		cout << "numero es 2";
		break;

	default:
		cout<<"rango no contemplado";
		break;
	}

	

	return 0;
}