#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter size of pattern";
    cin>>num;
    for(int i =1;i<=num;i++){
        for(int j=i;j<=num+i;j++){
           
                if(i==1||i==num||j==i||j==num+i){
                    cout<<"* ";
                }
                else{
                    cout<<j<<" ";
                }
        }
        cout<<"\n";
    }
}
