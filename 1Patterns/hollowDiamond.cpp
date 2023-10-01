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
//    1
//   121
//  12321
// 1234321
//123454321

[Program finished]
int main2(int argc, char *argv[])
{
	 for(int i =1;i<=5;i++){
        for(int j =1;j<6-i;j++){
            cout<<" ";
        }
        for(int j =1;j<=i;j++){
            cout<<j;
        }
        for(int j =i-1;j>=1;j--){
            cout<<j;
        }
        cout<<"\n";
    }
	 
}

//1 2 3 4 5
//2     5
//3   5
//4 5
//5

int main3(int argc, char *argv[])
{
	 for(int i =5;i>=1;i--){
        for(int j=1;j<i;j++){
            if(j==1)
            	cout<<6-i<<" ";
            else if(i==5)
            	cout<<j<<" ";
            else
            	cout<<"  ";
        }
        cout<<"5";
        cout<<"\n";
    }
	 
}
