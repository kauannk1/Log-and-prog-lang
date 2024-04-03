#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	float preco, lucro, fat;
	int qnt;
	
	preco = 5;
	qnt = 120;
	
	cout << setprecision(2) << fixed; //definir o numero de casas depois da vírgula
	
	cout << "|\tR$\t|\tIngr.\t|\tFat.\t|\tLucro\t| \n ---------------------------------------------------------------" << endl;
	while (preco >= 1){
		fat = preco * qnt;
		lucro = fat - 200;
		
		cout << "|\t"<< preco << "\t|\t" << qnt << "\t|\t" << fat << "\t|\t" << lucro << "\t|" << endl;
		preco = preco - 0.5;
		qnt = qnt + 26;
	}
	
	return 0;
}
