#include <iostream>

using namespace std;

int main(){
	int dias,saldo,piso,mov;
	cin >>dias >>saldo;
	piso = saldo;

	while(dias > 0){
		cin >>mov;
		saldo += mov;

		if(saldo < piso){ piso = saldo;}

		dias--;
	}

	cout <<piso <<"\n";

	return 0;
}