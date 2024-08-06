#include <iostream>
#include <cstdlib>
using namespace std;




void catalogo(){
	
	cout << "CODIGO: \t|PRODUTO: \t                      |PRECO:" << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << "1 \t        Enroladinho de Presunto e Queijo \tR$6,50" << endl;
	cout << "2 \t        Hamburguer de Cheddar \t\t\tR$6,50" << endl;
	cout << "3 \t        Hamburguer com Bacon \t\t\tR$6,50" << endl;
	cout << "4 \t        Pastel de Queijo \t\t\tR$7,00" << endl;
	cout << "--------------------------------------------------------------" << endl;
	
	
}
int main(){
	double caixa = 0;
	bool running = true;
	int code;
	char answer;
	
	  cout << "Voce gostaria de iniciar o programa? (S/N) " << endl;
	  cin >> answer;
	  
	  if (answer == 'S' || answer == 's'){
	  	
		cout << "Digite o codigo do produto: \n" << endl;
		
	  	while(running = true){
	  		
	  		//Chamando a função
	  		catalogo();
	  		
	  		cout << "(0) Para Encerrar a Compra" << endl;
	  		cout << "Total a pagar: R$" << caixa << endl;
	  		cin >> code;
	  		
	  		if (code == 0){
	  			running = false;
	  			cout << "Total a pagar: R$" << caixa << endl;
	  			return 0;
			}
			
			switch (code){
				
				case 0 : if (code == 0){
	  			running = false;
	  			cout << "Total a pagar: R$" << caixa << endl;
	  			return 0;
			}
				
				case 1: caixa = caixa + 6.50;
				
				case 2: caixa = caixa + 6.50;
				
				case 3: caixa = caixa + 6.50;
				
				case 4: caixa = caixa + 7.00;
				
			}
			
			//Limpando console
	  		system("cls");
	  		
		  }
	  }
	  

return 0;
}
