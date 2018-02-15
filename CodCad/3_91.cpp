#include <iostream>

using namespace std;

int main(){
	int H, P, F, D;
	char out;

	cin>>H>>P>>F>>D;

	if(H<F){
		if(F<P){
			if(D == -1){
				out = 'S';
			} else {
				out = 'N';
			}
		} else {
			if(H<P){
				if(D == -1){
					out = 'N';
				} else {
					out = 'S';
				}
			} else {
				if(D == -1){
					out = 'S';
				} else {
					out = 'N';
				}
			}
		}
	} else {
		if(F<P){
			if(H<P){
				if(D == -1){
					out = 'N';
				} else {
					out = 'S';
				}
			} else {
				if(D == -1){
					out = 'S';
				} else {
					out = 'N';
				}
			}
		} else {
			if(D == -1){
				out = 'N';
			} else {
				out = 'S';
			}
		}
	}

	cout <<out <<"\n";

	return 0;
};