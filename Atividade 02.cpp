#include <iostream>
using namespace std;

float equacao(int a, int b, int c){
	
	return ((b*b)-4*a*c);
}

int main (){
	int numero1 = 0;
	int numero2 =0;
	int numero3 = 0;
	cout << "Digite o primeiro numero:\n";
	cin >> numero1;
	cout << "Digite o segundo numero:\n";
	cin >> numero2;
	cout << "Digite o terceiro numero:\n";
	cin >> numero3;
	
	cout << equacao(numero1,numero2,numero3);
}
