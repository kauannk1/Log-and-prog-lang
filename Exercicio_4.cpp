#include <iostream>

using namespace std;

int main(){
	
	int n1, n2, res;
	
	cout << "Digite um numero inteiro: ";
	cin >> n1;
	n1 = n1 * 2;
	
	cout << "Digite outro numero inteiro: ";
	cin >> n2;
	n2 = n2 * 3;
	
	res = (n1 + n2) / 5;
	
	cout << "A media ponderada desses dois numeros considerando peso 2 e 3 respectivamente eh: " << res << endl;
	
	return 0;
}