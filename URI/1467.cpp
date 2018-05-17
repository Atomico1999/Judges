#include <iostream>

using namespace std;

int main()
{
	int A,B,C,Dif;

	while(true)
	{
		cin >> A >> B >> C;

		if (!cin)
		{
			break;
		}

		Dif = A+B+C;

		if(Dif == 3 || Dif == 0)
		{
			cout << "*";
		}
		else if(Dif == 2)
		{
			if(A==0)
			{
				cout << "A";
			}
			else if(B==0)
			{
				cout << "B";
			}
			else if(C == 0)
			{
				cout << "C";
			}
		}
		else if(Dif == 1)
		{
			if(A==1)
			{
				cout << "A";
			}
			else if(B==1)
			{
				cout << "B";
			}
			else if(C == 1)
			{
				cout << "C";
			}
		}

		cout << endl;
	}


	return 0;
}