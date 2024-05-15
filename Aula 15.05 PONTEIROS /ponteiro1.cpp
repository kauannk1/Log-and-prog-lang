#include <iostream>
#include <cmath>
using namespace std;

void eq2grau(float a, float b, float c, float *x1, float *x2){
	float delta = b*b - 4*a*c;
	
	if (delta < 0)
		return;
		
	*x1 = (-b + sqrt(delta)) / (2*a); // * => ponteiro
	*x2 = (-b - sqrt(delta)) / (2*a); // * => ponteiro
}

int main(){
	float x_1, x_2;
	
	eq2grau(2, 8, 1, &x_1, &x_2); // & => vai receber o valor do ponteiro
	
	cout << "X1: " << x_1 << endl << "X2: " << x_2 << endl;
	return 0;
}
