#include <iostream>
#include <ctime> // biblioteca para randomizar numero
using namespace std;

int main(){
	
	int vet[15], idx_maior = 0, idx_menor = 0;
	
	srand(time(NULL)); //Randomizar num
	
	//Preechimento do vetor
	for (int i = 0; i < 15; i++){
		vet[i] = rand() % 100;
		cout << "Valor sorteado: " << vet[i] << endl;
	}
	
	for (int i = 0; i <15 ; i++){
		if (vet[i] < vet[idx_menor]) {
			idx_menor = i;
		}
		
		if (vet[i] > vet[idx_maior]) {
			idx_maior = i;
		}
	}
	cout << "-------------------------------" << endl; // linha para separar 
	
	cout << "O maior valor sorteado eh: " << vet[idx_maior] << " e esta na posicao " << idx_maior << endl;
	cout << "O menor valor sorteado eh: " << vet[idx_menor] << " e esta na posicao " << idx_menor;
	
	return 0;
}
