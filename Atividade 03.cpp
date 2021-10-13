#include <iostream>
using namespace std;

int maior(int a, int b, int c){
	if ( a > b && a > c){
		cout << a;
	}else if (b > a && b > c){
		cout << b;
	}else if (c > a && c > b){
		cout << c;
	}
	return 0;
}
int main(){
	int numero1, numero2, numero3;
	cout << "Digite um numero:\n";
	cin >> numero1;
	cout << "Digite um segundo numero:\n";
	cin >> numero2;
	cout << "Digite um terceiro numero:\n";
	cin >> numero3;
	
	return maior(numero1, numero2, numero3);
}
