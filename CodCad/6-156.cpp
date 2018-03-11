//Louis Ian Silva

#include <iostream>

using namespace std;

int main(){
	
	int contador,t1,t2,tAtivo=0;
	int dif;

	cin >>contador >>t2;
	t1 = t2;
	tAtivo += 10;

	for (int i = 0; i < contador-1; ++i)
	{
		cin >>t2;
		dif = t2-t1;

		//		ð€”↓ŋ
		//cout<<endl<<"for: "<<i<<endl;
		//cout<<"tempo 2: "<<t2<<endl;
		//cout<<"tempo 1: "<<t1<<endl;
		//cout<<"diferenca: "<<dif<<endl;
		//cout<<"Ativo: "<<tAtivo<<endl<<endl;

		if(t2 >= t1+10){
			tAtivo += 10;
		} else {
			tAtivo += t2-t1;
		}

		t1 = t2;
	}

	cout <<tAtivo <<endl;

	return 0;
}