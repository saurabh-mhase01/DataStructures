#include<iostream>
using namespace std;
int main1(){
    int num ;
    cout<<"enter size of pattern";
    cin>>num;
    for(int i =1;i<=num;i++){
        for(int j=1;j<=num;j++){
                if(j==i||j==num-i+1||i==num||i==1||j==1||j==num){
                    cout<<"* ";
                }else{
                    cout<<"  ";
                }
               
        }
        cout<<"\n";
    }
}

int main(){
    int num;
    cout<<"enter size of pattern";
    cin>>num;
    for(int i =1;i<=num;i++){
        for(int j=i;j<=num+i-1;j++){
           
                if(i==1||i==num||j==i||j==num+i-1){
                    cout<<"* ";
                }
                else{
                    cout<<j<<" ";
                }
        }
        cout<<"\n";
    }
}
