#include <iostream>
using namespace std;

int positivo(int parametro){
	if (parametro > 0){
		cout << parametro << "O Numero e Positivo!";
	}else {
		cout << parametro << "O Numero e Negativo!";
	}
	return 0;
}
int main (){
	int numero = 0;
		cout << "Digite um numero e descubra se ele e positivo ou negativo:\n";
		cin >> numero;
	return positivo(numero);
}
