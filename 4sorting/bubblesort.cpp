#include<iostream>
using namespace std;
void swapp(int* arr,int i,int j){
    int t=arr[i];
    arr[i]=arr[j];
    arr[j]=t;
}
int* bubbleSort(int* arr,int size){
    for(int i =0;i<size-1;i++){   
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swapp(arr,j,j+1);
            }  
        }
    }
}
void printarray(int* arr,int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int size;
    cout<<"enter size of array: ";
    cin>>size;

    int arr[size];
    for(int i =0;i<size;i++){
        cout<<"enter element :"<<i+1<<" ";
        cin>>arr[i];
    }
    bubbleSort(arr,size);
    printarray(arr,size);
    
}

