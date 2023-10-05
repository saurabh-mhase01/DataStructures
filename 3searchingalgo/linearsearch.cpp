#include<iostream>
using namespace std;
int linearsearch(int*,int ,int);
int main(){
    int size ;
    cout<<"enter size of array";
    cin>>size;
    int arr[size];
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    int number ;
    cout<<"enter the elemet u want to search";
    cin>>number;
    int index = linearsearch(arr,size,number);

    if(index == -1){
        cout<<"element not found";
    }else{
        cout<<"element found at index :"<<index;
    }
}

int linearsearch(int* arr,int size,int number){
    for(int i =0;i<size;i++){
        if(arr[i]==number){
            return i;
        }
    }
    return -1;
}