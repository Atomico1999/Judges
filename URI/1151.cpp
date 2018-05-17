#include <iostream>

using namespace std;

int main()
{
	int Fib,N1=0,N2=1,Input;
	cin >> Input;

	if (Input == 1)
	{
		cout << N1;
		Input--;
	}

	if (Input >= 2)
	{
		cout << N1 << " " << N2;
		Input = Input - 2;
	}

	for (int i = 0; i < Input; ++i)
	{
		Fib = N1+N2;
		N1 = N2;
		N2 = Fib;
		cout << " " << Fib;
	}

	cout << endl;

	return 0;
}