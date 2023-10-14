#include <iostream>
using namespace std;




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
//1
//4 2
//3   3
//2     4
//1 2 3 4 5
int main3(int argc, char *argv[])
{
	 for(int i =1;i<=5;i++){
        for(int j=1;j<i;j++){
            if(j==1)
            	cout<<6-i<<" ";
            else if(i==5)
            	cout<<j<<" ";
            else
            	cout<<"  ";
        }
        cout<<i<<" ";
        cout<<"\n";
    }
	 
}

//1 2 3 4 5
//2     5
//3   5
//4 5
//5

int main4(int argc, char *argv[])
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
//    1
//   4 2
//  3   3
// 2     4
//1 2 3 4 5
int main5(int argc, char *argv[])
{
	 for(int i =1;i<=5;i++){
	       for(int j =1;j<6-i;j++){
            cout<<" ";
        }
        for(int j=1;j<i;j++){
            if(j==1)
            	cout<<6-i<<" ";
            else if(i==5)
            	cout<<j<<" ";
            else
            	cout<<"  ";
        }
        cout<<i<<" ";
        cout<<"\n";
    }
	 
}

//     *
//    * *
//   *   *
//  *     *
// *       *
//*         *
// *       *
//  *     *
//   *   *
//    * *
//     *
int main6()
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

//        1
//      2 3 2
//    3 4 5 4 3
//  4 5 6 7 6 5 4
//5 6 7 8 9 8 7 6 5

int main7()
{
	for(int i=1;i<=5;i++)
	{
		int x=i;
		for(int j=i;j<5;j++)
		{
			cout<<"  ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<x++<<" ";
		}
		x=x-2;
		for(int j=1;j<i;j++)
		{
			cout<<x--<<" ";
		}
		cout<<"\n";
	}
}

//1               1
//1 2           2 1
//1 2 3       3 2 1
//1 2 3 4   4 3 2 1
//1 2 3 4 5 4 3 2 1
int main8()
{
	int i,j,k=7;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		for(j=1;j<=k;j++)
		{
			cout<<"  ";
		}
		k=k-2;
		for(j=i;j>=1;j--)
		{
			if(j!=5)
				cout<<j<<" ";
			
		}cout<<"\n";
	}
}

