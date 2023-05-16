#include <iostream>
#include <list>


class Proporciones
{
public:
	void casa(){
		using namespace std;
		int puertas;
		int ventanas;
		string propietario;

		puertas = 4;
		ventanas = 4;
		propietario = "Tony Alonzo";

		cout << "La casa tiene " << puertas<< " puertas \n" << ventanas<< " Ventanas y \nPropierario es: " << propietario; 

	}
	
};

using namespace std;
int main(){

	list<string> Milista;

	Milista.push_back("primera linea");
	Milista.push_back("primera segunda");
	Milista.push_back("primera tercera");

	for(auto i=Milista.begin(); i!= Milista.end(); i++){
		cout << *i <<"\n";
	}


	Proporciones objetocasa;
	objetocasa.casa();



	return 0;
}