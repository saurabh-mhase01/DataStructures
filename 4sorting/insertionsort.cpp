#include<iostream>
using namespace std;

int* insertionSort(int* arr,int size){
    int j=0;
    for(int i =1;i<size;i++){
           int  number = arr[i];
           j=i-1;
            while(j>=0&&arr[j] >number)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=number;
    }
}
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
    int size ;
    cout<<"enter size of array: ";
    cin>>size;

    int arr[size];
    store(arr,size);
    insertionSort(arr,size);
    printarray(arr,size);
    
}

