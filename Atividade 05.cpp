#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int dados(int parametro)	{
		 parametro = time(0);
        	srand(parametro);
        	cout<< "Seu numero aleatorio de hoje e " << 1+rand()%6;
    return 0;
}
int main(){
	int i = 0;
	return dados(i);
}
