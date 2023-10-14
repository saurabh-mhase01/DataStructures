#include<iostream>
#include<string.h>
using namespace std;

void printarray(int* arr,int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void store(int *arr,int size){
    for(int i =0;i<size;i++){
        cout<<"enter element :"<<i+1<<"\n";
        cin>>arr[i];
    }
}
int main(){
    string str [8] = {"cn", "am", "va", "tk","kl","nv","gn","vd"};
    int dis [8]={800,1200,2400,400,700,650,500,6500};
    int i ;
    cout<<"enter starting stop";
    string start,stop;
    cin>>start;
    cout<<"enter second stop";
    cin>>stop;
    int startindex,endindex;
    for(i=0;i<7;i++){
        if(str[i]==start){
            startindex=i;
        }
        if(str[i]==stop){
            endindex=i;
        }
    }
   
    int sum=0;
    int j=startindex;
    // while(j<=endindex){ this was my mistake 
    while(j!=endindex-1){
        sum += dis[j];
        
        j++;
        if(j==8){
            j=0;
        }
    }

    float fair = sum/1000;
    
    cout<<fair*5;
}



 
