#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number to print pyramid";
    cin>>num;
    cout<<"\n";
    int star = num+3;

    for(int i =1;i<=num;i++){
        for(int j=1;j<=star;j++){
            cout<<"* ";
        }
        cout<<i;
        for(int j =1;j<=i-1;j++){
            cout<<" * "<<i;
        }
        for(int j=1;j<=star;j++){
            cout<<" *";
        }
        star--;
        cout<<"\n";
    }
}