#include <iostream>

using namespace std;

int main(){
	float product, discount, res;
	
	cout << "Digite o preco do produto: ";
	cin >> product;
	discount = product * 0.10;
	
	res = product - discount;
	
	cout << "O preco do produto apos o desconto de 10% eh: " << res << endl;
	return 0;
}