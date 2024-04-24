#include <iostream>
using namespace std;

int main(){
	int vet[6], i, impares = 0, pares = 0, vpares[6], vimpares[6];
	
	for (i = 0; i < 6; i = i + 1) {
		cout << "Informe um valor qualquer: " << endl;
		cin >> vet[i];
	}
	
	
	//processamento - verificação dos pares e ímpares
	/*
	for (i = 0; i < 6; i++){
		if (vet[i] % 2) {  //se for diferente de 0:
			cout << vet[i] << " eh impar " << endl;
			impares++;
		}
		else {
			cout << vet[i] << " eh par " << endl;
		}
	}
	
	cout << "Quantidade de impares: " << impares << endl;
	cout << "Quantidade de pares: " << (6-impares) << endl;
	*/
	
	//processamento2 - verificacao dos pares e impares:
	for (i = 0; i < 6; i++) {
		if (vet[i] % 2) {  //se for diferente de 0:
			vimpares[impares] = vet[i];
			impares++;
		}
		
		else {
			vpares[pares] = vet[i];
			pares++;
		}
	}
	
	cout << "Quantidade de impares: " << impares << "[ " << endl;
	for( i = 0; i < impares; i++)
		cout << vimpares[i] << "\t";
	cout << " ]" << endl;
	
	cout << "Quantidade de pares: " << pares << endl;
	for( i = 0; i < pares; i++)
		cout << vpares[i] << "\t";
	cout << " ]" << endl;
	return 0;
}
