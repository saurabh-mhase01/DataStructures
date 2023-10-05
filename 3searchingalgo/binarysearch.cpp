#include<iostream>
using namespace std;
int binarysearch(int*,int ,int);
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
    int index = binarysearch(arr,size,number);

    if(index == -1){
        cout<<"element not found";
    }else{
        cout<<"element found at index :"<<index;
    }

    
}

int binarysearch(int* arr,int end,int number){
    int big =0;
    int mid = (big +end)/2;

    while(big<=mid){
        if(arr[mid]==number){
            return mid;
        }
        if(arr[mid]>number){
            big = mid+1;
        }
        if(arr[mid]<number){
            end=mid-1;
        }
    }
    return -1;
}