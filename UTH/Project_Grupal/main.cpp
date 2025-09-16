#include <iostream>
#include"Banco.hpp"
using namespace std;


int main(){

	Banco banco;

	cout << "hola mundo" << endl;

		
	while(true){
		banco.OpsionesMenu();
		banco.CondicionMenu();

	}
	



	return 0;
}