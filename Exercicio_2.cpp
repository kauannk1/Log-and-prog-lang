#include <iostream>

using namespace std;

int main(){
	int n1, n2, n3, res;
	
	cout << "Digite tres numeros inteiros: " << endl;
	cin >> n1 >> n2 >> n3;
	
	res = n1 * n2 * n3;
	
	cout << "A multiplicacao desses 3 numeros (" << n1 << " * " << n2 << " * " << n3 << ") eh: "<< res;
	
	return 0;
}