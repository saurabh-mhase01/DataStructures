#include<iostream>
using namespace std;

void swap(int* arr,int i,int j){
    int t=arr[i];
    arr[i]=arr[j];
    arr[j]=arr[i];
}
int* selectionSort(int* arr,int size){
    for(int i =0;i<size;i++){
        int min =0 ,index=i;
        for(int j=i+1;j<size;j++){
            if(min>arr[j]){
                min=arr[j];
                index = i;
            }  
        }
        swap(arr,i,index);
    }
}
void printarray(int* arr,int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int size ;
    cout<<"enter size of array: ";
    cin>>size;

    int arr[size];
    for(int i =0;i<size;i++){
        cout<<"enter element :"<<i+1;
        cin>>arr[i];
    }
    selectionSort(arr,size);
    printarray(arr,size);
    
}

