#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	double X1,X2,Y1,Y2,Dist;

	cin >> X1 >> Y1 >> X2 >> Y2;

	Dist = pow((X2-X1),2) + pow((Y2-Y1),2);
	Dist = sqrt(Dist);

	cout.precision(4);
	cout.setf(ios::fixed);

	cout << Dist << endl;

	return 0;
}