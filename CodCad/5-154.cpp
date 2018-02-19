//Louis Ian Silva

#include <iostream>

using namespace std;

int main(){
	int n,maior;
	cin>>n;
	maior = n;

	while(true){
		cin>>n;
		if(n==0)
			break;
		if(n>maior)
			maior = n;
	}

	cout <<maior <<"\n";

	return 0;
}