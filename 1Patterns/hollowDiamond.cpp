#include <iostream>
using namespace std;
int main()
{

	int  i,j;
	for (i= 1; i<=6;i++) {
		for (j=6; j>i; j--) {
			cout << " ";
            
		}
		cout << "*";
		for (j=1; j<(i-1)*2;j++) {
			cout <<" ";
		}
		if (i==1) {
			cout << "\n";
		}
		else {
			cout << "*\n";
		}
	}
	for (i=6-1; i>=1;i--) {
	
		for (j=6;j>i;j--) {
			cout << " ";
		}
		cout << "*";
		for (j=1; j<(i-1)*2;j++) {
			cout <<" ";
		}
		if (i== 1) {
			cout << "\n";
		}
		else {
			cout << "*\n";
		}
	}
	return 0;
}