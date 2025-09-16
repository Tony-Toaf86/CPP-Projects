#include <iostream>
#include"Banco.hpp"







void Banco::CrearCuenta(int numero, string titular, double saldoInicial) {
	numerosCuenta[CantidadDeCuentas] = numero;

    saldos[CantidadDeCuentas] = saldoInicial;

    titulares[CantidadDeCuentas] = titular;

    CantidadDeCuentas++;
        
    cout << "Cuenta creada exitosamente para " << titular 
         << " con numero " << numero 
        << " y saldo inicial: " << saldoInicial << endl;
}

int  Banco::OpsionesMenu(){ //mostrando opsiones del menu 
	cout << "-----OPSIOENES DEL MENU----" << endl;
	cout << "1.DEPOSITAR DINERO" << endl;
	cout << "2.RETIRAR DINERO" << endl;
	cout << "3.REVISAR SALDO" << endl;
	cout << "4.TRANFERIR FONDOS" << endl;
	cout << "5.VER ESTADO DE CUENTA" << endl;
	cout << "6.HISTORIAL DE TRANSACCIONES" << endl;
	cout << "7.CREAR UNA CUENTA" << endl;
	cout << "8.FINALIZAR PROGRAMA" << endl;
	cout << "ELIJA UNA OPERACION: ";
	cin >> opsion;

	return opsion;
}

void Banco::FinalizarPrograma(){
	cout << "PROGRAMA FINALIZADO" << endl;
	exit(0);
}

void Banco::CondicionMenu(){ //elijiendo del menu 
	if(opsion == 8 ){
		//cout << "--------------PROGRAMA FINALIZADO--------------"  << endl;
		FinalizarPrograma();

	}else if(opsion == 1){
		cout << "--------------DEPOSITAR DINERO--------------" << endl;
	}
	else if(opsion == 2){
		cout << "--------------RETIRAR DINERO--------------" << endl;
	}
	else if(opsion == 3){
		cout << "--------------RETIRAR SALDOS--------------" << endl;
	}
	else if(opsion == 4){
		cout << "--------------VER TRANFERENCIAS DE FONDOS--------------" << endl;

	}else if(opsion == 5){
		cout << "--------------VER ESTADO DE CUENTA--------------" << endl;

	}else if(opsion == 6){	
		cout << "--------------HISTORIAL DE TRANSACCIONES--------------" << endl;
	}else if(opsion == 7){
		cout << "--------------REGISTRAR CUENTA--------------" << endl;
		int numACrear;
		cout << "Cuantas cuentas desea crea: ";
		cin >> numACrear;

		for(int i = 0;  i < numACrear; i++){

			cout << "NUMERO DE LA CUENTA: ";
			cin >> numero_cuenta;

			cout << "NNOMBRE DEL TITULAR: ";
			cin >> nombre_titular;

			cout << "INGRESE EL SALDO INICIAL EN LEMPIRAS: ";
			cin >> saldo_inicial;

			CrearCuenta(numero_cuenta, nombre_titular, saldo_inicial);
			
		 }

		
	}


}