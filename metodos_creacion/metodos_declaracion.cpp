#include <iostream>

// creacion de metodos 

class Miclase{
public:
void metodo(){
	using namespace std;

	cout <<"hola mundo desde la funcion";

}
};
using namespace std;

int main(){
	Miclase objeto1;
	objeto1.metodo();
	


	return 0;
}