#include <iostream>

using namespace std;



int main() {

  string nombre = "Tony Alonzo";

  for (int i = 0 ;i< nombre.length(); i++){
    if( nombre[i].equals(" ") ){
        cout << nombre[i];

    }
   

  }
    
    

    return 0;
}