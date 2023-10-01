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
//*
//* *
//* * *
//* * * *
//* * * * *
//* * * *
//* * *
//* *
//*
#include<iostream>
using namespace std;
int main1(int argc, char *argv[])
{
	 for(int i = 0; i<5;i++){
	 	for(int j=0;j<i;j++){
	 		cout<<"* ";
	 	}
	 	cout<<endl;
	 }
	 for(int i = 0; i<5;i++){
	 	for(int j=0;j<5-i;j++){
	 		cout<<"* ";
	 	}
	 	cout<<endl;
	 }
}
