//Louis Ian Silva

#include <iostream>

using namespace std;

int main(){
	int cont,tempo,anterior,ativo,somado;
	cin >>cont;

	cin >>tempo;
	anterior = tempo;
	ativo = 10;

	if(cont != 1){
		for(int i = 0; i<cont-1; i++){
			cin >>tempo;
			cout << "tempo: " <<tempo <<"\n";
			cout << "anterior: " <<anterior <<"\n";
			cout << "ativo: " <<ativo <<"\n";

			if(tempo < anterior+10){
				somado = (anterior+10-tempo);
				cout << "somado: " <<somado <<"\n";
				ativo += somado;
			} else {
				ativo += 10;
			}
			anterior = tempo;
		}
	}

	cout <<ativo << "\n";

	return 0;
}