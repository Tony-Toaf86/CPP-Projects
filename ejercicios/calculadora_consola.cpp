#include <iostream>
#include <list>
using namespace std;


class Operaciones{ //clase de operaciones
public:
	int suma(int n1, int n2){
		cout << "El resultado es: " << n1 + n2;
		return 0;
	} //final suma

	int resta(int n1, int n2){
		cout << "El resultado es: " << n1 - n2;
		return 0;
	} //final resta

	int mul(int n1, int n2){
		cout << "El resultado es: " << n1 * n2;
		return 0;
	} //final multiplicacion

	int div(int n1, int n2){
		cout << "El resultado es: " << n1 / n2;
		return 0;
	} //final divicion

}; //final clase operaciones +


int main (){
	int n1,n2;

	cout << "Numero 1: ";
	cin >> n1;

	cout << "Numero 2: "; // pidiedo los valores por consola
	cin >> n2;

	

	//creando la lista de opsiones 
	list<string> milista;
	milista.push_back("1.sumar");
	milista.push_back("2.restar");
	milista.push_back("3.multiplicar");
	milista.push_back("4.dividir");

	//imprimiendo la lista

	for (auto i = milista.begin(); i!=milista.end(); i++){
		cout << *i << "\n";
	}

	//guardando la opsion elegida
	int opsion;
	cout << "selecciona una opsion: ";
	cin >> opsion;
	cout << endl;

	switch(opsion){
	case 1:
		Operaciones objetosuma; //iterando la clase 
		objetosuma.suma(n1, n2); //pasando los parametros del objeto
		break;

	case 2:
		Operaciones objetoresta; //iterando la clase 
		objetoresta.resta(n1, n2); //pasando los parametros del objeto
		break;

	case 3:
		Operaciones objetomul; //iterando la clase 
		objetomul.mul(n1, n2); //pasando los parametros del objeto
		break;

	case 4:
		Operaciones objetodiv; //iterando la clase 
		objetodiv.div(n1, n2); //pasando los parametros del objeto
		break;

	default:
		cout <<"NO SE CONTEMPLA LA OPERACION";
		break;

	}

	return 0;
}