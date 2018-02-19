//Louis Ian Silva

#include <iostream>

using namespace std;

int main(){
	int cont,lata,copo,quebrado=0;
	cin>>cont;

	for(int i=cont; i>0; i--){
		cin >>lata >>copo;
		if(lata > copo)
			quebrado+=copo;
	}
	
	cout <<quebrado <<"\n";

	return 0;
}