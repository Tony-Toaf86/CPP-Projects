#include <iostream>

class Suma{
public:
	int suma( int n1 , int n2){
		using namespace std;

		cout << "hola mundo";

		cout << "resultado = "<< n1 + n2;
		return  0;

	}
};

int main(){
	using namespace std;

	int n1, n2;

	cout << "numero 1: ";
	cin >> n1;

	cout << "numero 2: ";
	cin >> n2;

	// iterando la clase

	Suma objetosuma;
	objetosuma.suma(n1 , n2);
	//cout<< "el resultado es " << 



	


	return 0;
}