#include <iostream>

using namespace std;

int main(){
	float n1, n2, res;
	
	cout << "Digite um numero: ";
	cin >> n1;
	
	cout << "Digite outro numero: ";
	cin >> n2;
	
	res = n1 / n2;
	
	cout << "A divisao do primeiro pelo segundo numero eh: " << res << endl;
	
	return 0;
}