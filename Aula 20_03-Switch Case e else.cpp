#include <iostream>
using namespace std;

int main(){
	float valor, imposto;
	int tipo;
	
	cout << "Informe o valor de venda e o tipo: ";
	cin >> valor >> tipo;
	/*
	if (tipo == 1){
		imposto = valor * 0.12;
	}
		else {
			if (tipo == 2)
				imposto = valor * 0.05;
		
			else
				if (tipo == 2)
					imposto = valor * 0.05;
			
				else
				if (tipo == 3)
					imposto = valor * 0.02;
				
					else
					imposto = valor * 0.08;
	}
	
	*/
	switch(tipo){
		case 1: imposto = valor * 0.12;
				break;
		case 2: imposto = valor * 0.05;
				break;
		case 3: imposto = valor * 0.02;
				break;
		default: imposto = valor * 0.08;
	}
	
	cout << "O imposto a pagar eh: " << imposto + valor << endl;
	
	return 0;
}
