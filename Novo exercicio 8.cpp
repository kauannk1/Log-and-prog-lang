#include <iostream>
using namespace std;

int main(){
	
	int idade, i, n_50_60;
	float peso, altura;
	char olhos, cabelo;
	
	i = 0;
	n_50_60 = 0;
	
	while (i < 6){
		
		
		
		
		cout << "Informacoes sobre a pessoa numero " << i+1 << "\n------------------------------" << endl;
		
		cout << "Digite a idade: " << endl;
		cin >> idade;
		cout << "----------------------------------" << endl;
		
		cout << "Digite o peso: " << endl;
		cin >> peso;
		cout << "----------------------------------" << endl;
		
		cout << "Digite a cor dos olhos: " <<
			"\n ( A ) ----> Azul" <<
			"\n ( P ) ----> Preto" <<
			"\n ( V ) ----> Verde" <<
			"\n ( C ) ----> Castanho" <<
			"\n ----------------------------------" << endl;
		cin >> olhos;
		
		cout << "----------------------------------" << endl;
		cout << "Digite a cor do cabelo: " <<
			"\n ( P ) ----> Preto" <<
			"\n ( C ) ----> Castanho" <<
			"\n ( L ) ----> Loiro" <<
			"\n ( R ) ----> Ruivo" <<
			"\n ----------------------------------" << endl;
		cin >> cabelo;
		cout << "----------------------------------" << endl;
		
		i = i+1;
	}
	
	if (idade > 50 && peso < 60){
		n_50_60 = n_50_60 + 1;
	}
	
	
	
	
	return 0;
}
