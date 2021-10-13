#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int dado(){
	int parametro = 0;
	parametro = (time(NULL));
	srand(parametro);
    return (1 + rand()%6);
}
int main(){
	int d[] = {0, 0, 0, 0, 0, 0};

	for(int i=0 ; i <= 100000 ; i++){
       cout << dado() << "\n";
	}	
	return 0;
}
